/* Module: vegas30.exe
   Function: FUN_00453ef0
   Address: 00453ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453ef0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0xb78);
  iVar2 = *(int *)(param_1 + 0xb7c);
  if (uVar1 != 0 || iVar2 != 0) {
    FUN_00453340(param_1,*(uint *)(param_1 + 0xb70) + uVar1,
                 *(int *)(param_1 + 0xb74) + iVar2 + (uint)CARRY4(*(uint *)(param_1 + 0xb70),uVar1),
                 -uVar1,-(iVar2 + (uint)(uVar1 != 0)),1);
    FUN_00455090(param_1,0xf);
  }
  return;
}


