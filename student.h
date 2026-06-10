// PART: Student 구조체와 linked list 함수 선언

#ifndef STUDENT_H
#define STUDENT_H

// 상태 코드
enum error { SUCCESS = -1, DUPE_ID = 1, MISSING, OTHER };

// 데이터 구조체
typedef struct Student{
    int id;
    char name[32];
    int score;
    struct Student* next;
} Student;

// 함수 선언
void list_st (void);                        // 1 전체 노드 반환
void free_st (void);                        // 2 리스트 전체 메모리 해제
int add_st (int id, char* name, int score); // 3 노드 추가(tail에 추가)
Student* find_st (int id);                  // 4 ID 기준 검색
int delete_st (int id);                     // 5 노드 삭제
int update_st (int id, int score);          // 6 노드 정보 수정

// TODO: sort 함수 (id & score 기준 sort) (현재는 추가 순서대로 저장됨)
#endif