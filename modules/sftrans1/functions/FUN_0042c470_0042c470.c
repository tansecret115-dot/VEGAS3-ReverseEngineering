/* Module: sftrans1.dll
   Function: FUN_0042c470
   Address: 0042c470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0042c470(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x14);
  iVar2 = 0x20;
  do {
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[2] = 0x3f800000;
    puVar1[3] = 0x3f800000;
    puVar1[4] = 0x3f800000;
    puVar1[-1] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


