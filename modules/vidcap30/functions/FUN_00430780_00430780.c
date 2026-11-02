/* Module: vidcap30.exe
   Function: FUN_00430780
   Address: 00430780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430780(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((((*(uint *)(param_1 + 4) & 0x80) != 0) || (param_2 != *(int *)(param_1 + 0x44))) ||
     (param_3 != *(int *)(param_1 + 0x48))) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    uVar1 = FUN_00430170(param_1,param_2,param_3);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(int *)(param_1 + 0x44) = param_2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
    *(int *)(param_1 + 0x48) = param_3;
  }
  return;
}


