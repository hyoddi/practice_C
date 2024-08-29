int ready = 0;
while (!ready){
    printf("Wating for the ready signal.\n");
}

// 이렇게 코드를 작성하게 되면 컴파일러는 ready = 0,
// 즉, !ready = 1 로 컴파일 할 것이다. 즉 무한 루프를 돌게 될 것.
// 프로그래머는 외부신호에 의해 ready을 결정하게 할 심산이었겠지만...
// 이런 뜻하지 않은 일이 일어날 수 있기 때문에 volatile 타입 지정자를 이용해 최적화에서 제외해달라 해야한다.

// volatile : 변동이 있는