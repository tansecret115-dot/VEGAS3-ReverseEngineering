/* Module: vegas30.exe
   Function: FUN_0057b350
   Address: 0057b350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057b350(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
  }
  if (param_1[0x16] <= iVar3) {
    iVar2 = FUN_0057b310();
    if ((*(uint *)(param_1[1] * iVar2 + 8 + param_1[2]) < param_1[0x15] - 4U) ||
       (param_1[0x17] <= iVar3)) {
      uVar1 = *(undefined4 *)(param_1[1] * iVar2 + param_1[2] + 0x1c);
      _SfList_DeleteList_16(param_1,iVar2,1,0);
      return uVar1;
    }
  }
  return 0;
}


