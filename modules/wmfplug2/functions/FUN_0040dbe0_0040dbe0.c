/* Module: wmfplug2.dll
   Function: FUN_0040dbe0
   Address: 0040dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dbe0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined1 *puStack_14;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_14 = (undefined1 *)&local_8;
  local_8 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,&local_4,param_2,&stack0x0000000c,0);
  if (-1 < iVar1) {
    puStack_14 = (undefined1 *)0x0;
    (**(code **)(*param_1 + 0x18))(param_1,0,param_2,unaff_ESI,&puStack_14,4);
  }
  return;
}


