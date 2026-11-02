/* Module: rmbe3260.dll
   Function: FUN_66029790
   Address: 66029790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66029790(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_3;
  iVar3 = 0;
  if (param_3 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + -0x78) == 0) {
    return -0x7ffbfda8;
  }
  *param_3 = 1;
  if ((*(int *)(param_1 + 4) != 0) && ((short)*(undefined4 *)(param_1 + -0x44) != 0)) {
    puVar1 = (undefined4 *)**(undefined4 **)(param_1 + -0x48);
    iVar3 = FUN_6603bf40((int *)*puVar1,0x10017,&param_2);
    iVar3 = FUN_660157a0(iVar3);
    if (-1 < iVar3) {
      iVar3 = FUN_6603bf60((int *)*puVar1,0x10018,puVar2);
      iVar3 = FUN_660157a0(iVar3);
    }
  }
  return iVar3;
}


