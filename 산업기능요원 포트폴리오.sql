USE lib;

-- 테이블 생성
CREATE TABLE seocho_library (
    manage_division VARCHAR(255),
    title VARCHAR(255),
    author VARCHAR(255),
    publisher VARCHAR(255),
    publish_year DATETIME,
    isbn VARCHAR(255),
    call_number VARCHAR(255)
);

-- 데이터 삽입
INSERT INTO seocho_library (manage_division, title, author, publisher, publish_year, isbn, call_number)
SELECT "관리구분", "제목", "저자명", "출판사", "출판년도", "국제표준도서번호", "청구기호"
FROM `경기도 안양시_안양시립도서관 소장자료_20211210`;
ALTER TABLE seocho_library
ADD COLUMN ( title_Id INT AUTO_INCREMENT PRIMARY KEY );

-- 테이블 조회
SELECT * FROM seocho_library;
SELECT * FROM `경기도 안양시_안양시립도서관 소장자료_20211210`;

-- 테이블 구조 조회
DESC seocho_library;

-- 뷰 생성
CREATE VIEW seocho_library_title_view AS
SELECT title, author
FROM seocho_library;

-- 뷰 조회
SELECT * FROM seocho_library_title_view;

-- 테이블 삭제
DROP TABLE seocho_library;
DROP TABLE admin_seocho_library;

-- 뷰 삭제
DROP VIEW seocho_library_title_view;
-- 테이블 생성
CREATE TABLE admin_seocho_library
(
    admin_Id VARCHAR(10) UNIQUE NOT NULL,
    admin_Password VARCHAR(20) NOT NULL
);

-- 테이블 수정
ALTER TABLE admin_seocho_library
ADD COLUMN position VARCHAR(10) NOT NULL;
ALTER TABLE admin_seocho_library
ADD COLUMN name VARCHAR(10) NOT NULL;
ALTER TABLE admin_seocho_library
ADD COLUMN phone VARCHAR(20) NOT NULL;

-- 테이블 구조 조회
DESC admin_seocho_library;

-- 데이터 삽입
INSERT INTO admin_seocho_library(admin_Id, admin_password)
VALUES ('KJ0917', '0917!!');
INSERT INTO admin_seocho_library(admin_Id, admin_password, position)
VALUES('AN1234', '1234!!', '사서');
INSERT INTO admin_seocho_library(admin_Id, admin_password, position)
VALUES('BH4567', '4567!!', '관장');

-- 데이터 업데이트
UPDATE admin_seocho_library SET
position = "관리자", name = '김준'
WHERE admin_Id = 'KJ0917';
UPDATE admin_seocho_library SET
name = '장영실'
WHERE admin_Id = 'AN1234';
UPDATE admin_seocho_library SET
name = '세종대앙'
WHERE admin_Id = 'BH4567';

UPDATE admin_seocho_library SET
phone = "01073572191"
WHERE admin_Id = 'KJ0917';
UPDATE admin_seocho_library SET
phone = '01025639658'
WHERE admin_Id = 'AN1234';
UPDATE admin_seocho_library SET
phone = '01045823647'
WHERE admin_Id = 'BH4567';

-- 테이블 조회
SELECT * FROM admin_seocho_library;
-- 테이블 생성
CREATE TABLE seocho_library_customer
(
    customer_Id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(20)
);
CREATE TABLE seocho_library_customer_borrow
(
	name VARCHAR(10) UNIQUE,
    title VARCHAR(255),
    rental_date DATE,
    return_date DATE
);

-- 데이터 삽입
INSERT INTO seocho_library_customer(name)
VALUES ('이민준'), ('김현일'), ('김현민'), ('최하정'), ('김정원'), ('백상렬'), ('이순신'), ('홍길동'), ('박강훈'), ('심사임당'), ('김진일'), ('율곡 이이'), ('퇴계 이황');
INSERT INTO seocho_library_customer_borrow(name)
SELECT name
FROM seocho_library_customer;

-- 테이블 내용 추가 
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 1),
	rental_date = '2023-12-01',
	return_date = '2023-12-08'
WHERE 
	name = '이민준';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 2),
	rental_date = '2023-12-02',
	return_date = '2023-12-09'
WHERE 
	name = '김현일';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 3),
	rental_date = '2023-12-19',
	return_date = '2023-12-26'
WHERE 
	name = '김현민';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 4),
	rental_date = '2023-12-20',
	return_date = '2023-12-27'
WHERE 
	name = '최하정';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 5),
	rental_date = '2023-12-21',
	return_date = '2023-12-28'
WHERE 
	name = '김정원';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 6),
	rental_date = '2023-12-22',
	return_date = '2023-12-29'
WHERE 
	name = '백상렬';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 7),
	rental_date = '2023-12-23',
	return_date = '2023-12-30'
WHERE 
	name = '이순신';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 8),
	rental_date = '2023-12-03',
	return_date = '2023-12-10'
WHERE 
	name = '홍길동';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 9),
	rental_date = '2023-12-04',
	return_date = '2023-12-11'
WHERE 
	name = '박강훈';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 10),
	rental_date = '2023-12-05',
	return_date = '2023-12-12'
WHERE 
	name = '심사임당';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 11),
	rental_date = '2023-12-06',
	return_date = '2023-12-13'
WHERE 
	name = '김진일';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 12),
	rental_date = '2023-12-07',
	return_date = '2023-12-14'
WHERE 
	name = '율곡 이이';
UPDATE seocho_library_customer_borrow 
SET
	title = (SELECT title
			 FROM seocho_library
             WHERE title_Id = 13),
	rental_date = '2023-12-08',
	return_date = '2023-12-15'
WHERE 
	name = '퇴계 이황';    

-- 테이블 조회
SELECT * FROM seocho_library_customer;
SELECT * FROM seocho_library_customer_borrow;

-- 테이블 삭제
DROP TABLE seocho_library_customer;
DROP TABLE seocho_library_customer_borrow;

DELIMITER $$
CREATE PROCEDURE phone_proc()
BEGIN
SELECT CONCAT('긴급 연락처: ', name, ' -> ', phone, '(포지션: ', position, ')') 
 FROM admin_seocho_library;
END $$
DELIMITER ;

CALL phone_proc;
DROP procedure phone_proc;

SELECT a.제목, name
FROM `경기도 안양시_안양시립도서관 소장자료_20211210` a JOIN seocho_library_customer_borrow b
ON a.제목 = b.title;