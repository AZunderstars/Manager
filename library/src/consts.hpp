#ifndef __CONSTS_HPP__
#define __CONSTS_HPP__

#include <string>

const int BOOK_DEADLINE = 10,
          MAGAZINE_DEADLINE = 2,
          REFERENCE_DEADLINE = 5,
          MAX_BORROWED_PROF = 5,
          MAX_BORROWED_STUD = 2,
          BOOK_EXTEND_LIMIT = 2,
          REFERENCE_EXTEND_LIMIT = 2,
          MAGAZINE_EXTEND_LIMIT = 0,
          BOOK_FIRST_PENALTY_DAYS = 7,
          BOOK_FIRST_PENALTY = 2000,
          BOOK_SECOND_PENALTY_DAYS = 21,
          BOOK_SECOND_PENALTY = 3000,
          BOOK_THIRD_PENALTY = 5000,
          OLDER_MAGAZINE_YEAR = 1390,
          OLDER_MAGAZINE_PENALTY = 2000,
          NEW_MAGAZINE_PENALTY = 3000,
          REFERENCE_FIRST_PENALTY_DAYS = 3,
          REFERENCE_FIRST_PENALTY = 5000,
          REFERENCE_SECOND_PENALTY = 7000;

const std::string ALREADY_HAS_DOCUMENT = "You borrowed this document already",
                  MAXIMUM_BORROWED = "Maximum number of allowed borrows exceeded",
                  NAME_ALREADY_EXISTS = "Name already exists",
                  EMPTY_FIELD = "Empty field",
                  EMPTY_STRING = "",
                  DOCUMENT_ALREADY_EXISTS = "A document with the specified name already exists",
                  INVALID_NUMBER = "Invalid number",
                  INVALID_YEAR = "Invalid year",
                  INVALID_DOCUMENT = "This document does not exist",
                  HAVE_NOT_BORROWED = "You have not borrowed this document",
                  EXTEND_TODAY = "You can’t extend and borrow a document on the same day",
                  EXTEND_AFTER_PENALTY = "You can’t renew a document after receiving a penalty",
                  EXTEND_LIMIT_REACHED = "You can’t renew a document more than two times",
                  INVALID_DAY = "Invalid day",
                  EXTEND_LIMIT_MAGAZINE_REACHED = "You can’t renew magazines";

#endif
