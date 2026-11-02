/* Module: sfs4rw.dll
   Function: FUN_0047dbe0
   Address: 0047dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047dbe0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x16);
  *(undefined4 **)((int)param_1 + 0x1a9) = puVar1;
  *puVar1 = FUN_0047de90;
  puVar1[1] = &LAB_0047dff0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_0047dc10(param_1);
  return;
}


