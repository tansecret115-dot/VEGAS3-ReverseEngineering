/* Module: 28_83260.dll
   Function: FUN_10005e30
   Address: 10005e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10005e30(void *this,int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float *pfVar21;
  int iVar22;
  
  iVar22 = 5;
  pfVar21 = param_2;
  do {
    fVar1 = *(float *)((int)this + 0xaf0);
    fVar2 = *(float *)((int)this + 0xad0);
    fVar3 = *(float *)((int)this + 0xae8);
    fVar4 = *(float *)((param_1 - (int)param_2) + (int)pfVar21);
    fVar5 = *(float *)((int)this + 0xad8);
    fVar6 = *(float *)((int)this + 0xaec);
    fVar7 = *(float *)((int)this + 0xae4);
    fVar8 = *(float *)((int)this + 0xadc);
    fVar9 = *(float *)((int)this + 0xad4);
    fVar10 = *(float *)((int)this + 0xacc);
    fVar11 = *(float *)((int)this + 0xae0);
    *(undefined4 *)((int)this + 0xaf0) = *(undefined4 *)((int)this + 0xaec);
    *(undefined4 *)((int)this + 0xaec) = *(undefined4 *)((int)this + 0xae8);
    *(undefined4 *)((int)this + 0xae8) = *(undefined4 *)((int)this + 0xae4);
    uVar20 = *(undefined4 *)((int)this + 0xacc);
    *(undefined4 *)((int)this + 0xae4) = *(undefined4 *)((int)this + 0xae0);
    fVar12 = *(float *)((int)this + 0xb0c);
    *(float *)((int)this + 0xacc) = fVar4;
    *(undefined4 *)((int)this + 0xae0) = *(undefined4 *)((int)this + 0xadc);
    *(undefined4 *)((int)this + 0xadc) = *(undefined4 *)((int)this + 0xad8);
    fVar13 = *(float *)((int)this + 0xb04);
    fVar14 = *(float *)((int)this + 0xb10);
    *(undefined4 *)((int)this + 0xad8) = *(undefined4 *)((int)this + 0xad4);
    *(undefined4 *)((int)this + 0xad4) = *(undefined4 *)((int)this + 0xad0);
    *(undefined4 *)((int)this + 0xad0) = uVar20;
    fVar15 = *(float *)((int)this + 0xb00);
    fVar16 = *(float *)((int)this + 0xb18);
    fVar17 = *(float *)((int)this + 0xb14);
    fVar18 = *(float *)((int)this + 0xafc);
    fVar19 = *(float *)((int)this + 0xb08);
    *(undefined4 *)((int)this + 0xb18) = *(undefined4 *)((int)this + 0xb14);
    *(undefined4 *)((int)this + 0xb14) = *(undefined4 *)((int)this + 0xb10);
    *(undefined4 *)((int)this + 0xb10) = *(undefined4 *)((int)this + 0xb0c);
    *(undefined4 *)((int)this + 0xb0c) = *(undefined4 *)((int)this + 0xb08);
    *(undefined4 *)((int)this + 0xb08) = *(undefined4 *)((int)this + 0xb04);
    *(undefined4 *)((int)this + 0xb04) = *(undefined4 *)((int)this + 0xb00);
    *(undefined4 *)((int)this + 0xb00) = *(undefined4 *)((int)this + 0xafc);
    *(undefined4 *)((int)this + 0xafc) = *(undefined4 *)((int)this + 0xaf8);
    fVar1 = (fVar11 * *(float *)((int)this + 0xcdc) +
             *(float *)((int)this + 0xcc8) * fVar10 +
             *(float *)((int)this + 0xcd0) * fVar9 +
             *(float *)((int)this + 0xcd8) * fVar8 +
             *(float *)((int)this + 0xce0) * fVar7 +
             *(float *)((int)this + 0xce8) * fVar6 +
             *(float *)((int)this + 0xcd4) * fVar5 +
             *(float *)((int)this + 0xce4) * fVar3 +
             *(float *)((int)this + 0xccc) * fVar2 + *(float *)((int)this + 0xcec) * fVar1 + fVar4)
            - (fVar19 * *(float *)((int)this + 0xd34) +
              *(float *)((int)this + 0xd20) * *(float *)((int)this + 0xaf4) +
              *(float *)((int)this + 0xd28) * fVar18 +
              *(float *)((int)this + 0xd24) * *(float *)((int)this + 0xaf8) +
              *(float *)((int)this + 0xd40) * fVar17 +
              *(float *)((int)this + 0xd44) * fVar16 +
              *(float *)((int)this + 0xd2c) * fVar15 +
              *(float *)((int)this + 0xd3c) * fVar14 +
              *(float *)((int)this + 0xd30) * fVar13 + *(float *)((int)this + 0xd38) * fVar12);
    *(undefined4 *)((int)this + 0xaf8) = *(undefined4 *)((int)this + 0xaf4);
    iVar22 = iVar22 + -1;
    *(float *)((int)this + 0xaf4) = fVar1;
    *pfVar21 = fVar1;
    pfVar21 = pfVar21 + 1;
  } while (iVar22 != 0);
  return;
}


