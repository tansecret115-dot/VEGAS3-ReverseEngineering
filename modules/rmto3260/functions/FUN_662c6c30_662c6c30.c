/* Module: rmto3260.dll
   Function: FUN_662c6c30
   Address: 662c6c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662c6c30(uint param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (0x3fff < param_1) {
    uVar2 = FUN_662f2bf0(param_1);
    *param_2 = uVar2;
    return 4;
  }
  uVar1 = FUN_662f2bb0((ushort)param_1 | 0x4000);
  *(undefined2 *)param_2 = uVar1;
  return 2;
}


