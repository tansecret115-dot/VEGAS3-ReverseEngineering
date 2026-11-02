/* Module: vidcap30.exe
   Function: FUN_00499e20
   Address: 00499e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00499e20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_ESI;
  int *piVar3;
  undefined4 local_4;
  
  local_4 = 0;
  puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x18) + 0x20) + 8);
  piVar3 = (int *)&DAT_005a5b38;
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_005a5b38,&local_4);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar3 + 0x70))(piVar3,local_4);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar3 + 0x68))(piVar3,unaff_ESI);
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return iVar2;
}


