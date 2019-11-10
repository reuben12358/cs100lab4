#include "gtest/gtest.h"

#include <iostream>
#include "ceil.h"
#include "floor.h"
#include "abs.h"

#include "base.h"
#include "Operator.h"
#include "Op.h"
#include "UnaryOperator.h"
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"
#include "Sqr.h"

TEST(a,b) {
    Op* op1 = new Op(8.2);
    Op* op2 = new Op(2);
    
    Add* A = new Add(op1,op2);
    Sub* B = new Sub(op1,op2);
    Mult* C = new Mult(op1,op2);
    Div* D = new Div(op1,op2);
    Sqr* E = new Sqr(op1);

    Ceil* a = new Ceil(A);
    Ceil* b = new Ceil(B);
    Ceil* c = new Ceil(C);
    Ceil* d = new Ceil(D);
    Ceil* e = new Ceil(E);

    EXPECT_EQ(11, a -> evaluate());
    EXPECT_EQ(7, b -> evaluate());
    EXPECT_EQ(17, c -> evaluate());
    EXPECT_EQ(5, d -> evaluate());
    EXPECT_EQ(68, e -> evaluate());
}

TEST(floor ,b) {
    Op* op1 = new Op(8.2);
    Op* op2 = new Op(2);
    
    Add* A = new Add(op1,op2);
    Sub* B = new Sub(op1,op2);
    Mult* C = new Mult(op1,op2);
    Div* D = new Div(op1,op2);
    Sqr* E = new Sqr(op1);

    Floor* a = new Floor(A);
    Floor* b = new Floor(B);
    Floor* c = new Floor(C);
    Floor* d = new Floor(D);
    Floor* e = new Floor(E);

    EXPECT_EQ(10, a -> evaluate());
    EXPECT_EQ(6, b -> evaluate());
    EXPECT_EQ(16, c -> evaluate());
    EXPECT_EQ(4, d -> evaluate());
    EXPECT_EQ(67, e -> evaluate());
}

TEST(abs ,b) {
    Op* op1 = new Op(-8);
    Op* op2 = new Op(2);
    
    Add* A = new Add(op1,op2);
    Sub* B = new Sub(op1,op2);
    Mult* C = new Mult(op1,op2);
    Div* D = new Div(op1,op2);
    Sqr* E = new Sqr(op1);

    Abs* a = new Abs(A);
    Abs* b = new Abs(B);
    Abs* c = new Abs(C);
    Abs* d = new Abs(D);
    Abs* e = new Abs(E);

    EXPECT_EQ(10, a -> evaluate());
    EXPECT_EQ(6, b -> evaluate());
    EXPECT_EQ(16, c -> evaluate());
    EXPECT_EQ(4, d -> evaluate());
    EXPECT_EQ(64, e -> evaluate());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
