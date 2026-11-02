/* Module: vidcap30.exe
   Function: FUN_0046ab80
   Address: 0046ab80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0046ab80(int param_1,int *param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_c [4];
  undefined1 uStack_8;
  byte bStack_7;
  byte bStack_6;
  ushort uStack_5;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    if (-1 < (int)param_3) {
      return;
    }
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x2c))(param_2);
    iVar3 = (**(code **)(*param_2 + 0xc))(param_2,&stack0x00000000);
    if ((((-1 < iVar3) && (param_2 != (int *)0x0)) &&
        (iVar3 = FUN_00461350(param_2,iVar2 == 120000,&uStack_8), -1 < iVar3)) &&
       (((iVar2 = FUN_004613f0(param_2,iVar2 == 120000,auStack_c), -1 < iVar2 &&
         ((ushort)((uStack_5 & 0xf0) + (uStack_5 & 0xf)) != 0xff)) &&
        ((((CONCAT21(uStack_5,bStack_6) & 0xff) >> 4 & 1) * 0x10 +
          (CONCAT21(uStack_5,bStack_6) & 0xf) != 0x1f &&
         (((CONCAT11(bStack_6,bStack_7) & 0xff) >> 4 & 3) * 0x10 +
          (CONCAT11(bStack_6,bStack_7) & 0xf) != 0x3f)))))) {
      uVar1 = (ushort)((byte)uStack_5 & 0xf) + (ushort)(byte)((byte)uStack_5 >> 4) * 10;
      *param_3 = uVar1;
      param_3[2] = 7;
      param_3[7] = 0;
      param_3[1] = (ushort)(bStack_6 & 0xf) + (ushort)(bStack_6 >> 4 & 1) * 10;
      param_3[3] = (ushort)(bStack_7 & 0xf) + (ushort)(bStack_7 >> 4 & 3) * 10;
      param_3[4] = (ushort)(auStack_c[3] & 0xf) + (ushort)(auStack_c[3] >> 4 & 3) * 10;
      param_3[5] = (ushort)(auStack_c[2] & 0xf) + (ushort)(auStack_c[2] >> 4 & 7) * 10;
      param_3[6] = (ushort)(auStack_c[1] & 0xf) + (ushort)(auStack_c[1] >> 4 & 7) * 10;
      if (uVar1 < 0x5b) {
        *param_3 = uVar1 + 2000;
        return;
      }
      *param_3 = uVar1 + 0x76c;
      return;
    }
  }
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  return;
}


