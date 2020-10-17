CREATE TABLE Day29(
    S_ID int,
    SName VARCHAR(255),
    Company VARCHAR(255),
    Price int
);

INSERT INTO Day29
VALUES(1091, 'Dot Pen', 'ABC', 12);
INSERT INTO Day29
VALUES(7654, 'Pencil', 'XYZ', 8);
INSERT INTO Day29
VALUES(8769, 'Eraser', 'CDM', 9);
INSERT INTO Day29
VALUES(2313, 'Pencil', 'CAM', 10);
INSERT INTO Day29
VALUES(8933, 'Gel Pen', 'XYZ', 17);
INSERT INTO Day29
VALUES(3241, 'BallPoint Pen', 'GHI', 27);
INSERT INTO Day29
VALUES(3731, 'Natraj Pencil', 'LKI', 3);
INSERT INTO Day29
VALUES(6657, 'Eraser', 'ETR', 9);
INSERT INTO Day29
VALUES(3990, '15cm Scale', 'POP', 13);
INSERT INTO Day29
VALUES(9087, 'Magic Eraser', 'KIO', 16);

SELECT * FROM Day29;

ALTER TABLE Day29
DROP COLUMN Company;

SELECT * FROM Day29;