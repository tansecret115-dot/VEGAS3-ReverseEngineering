/* Module: encn3260.dll
   Function: FUN_664be800
   Address: 664be800
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_664be800(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((((((uVar1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) &&
        (uVar3 = *(uint *)(param_1 + 8), uVar3 != 0)) &&
       ((uVar4 = *(uint *)(param_1 + 0x10), uVar4 != 0 && (*(ushort *)(param_1 + 0x14) != 0)))) &&
      ((*(short *)(param_1 + 0x16) != 0 && ((uVar1 <= uVar2 && (uVar2 < uVar4)))))) &&
     ((uVar1 <= uVar3 && (uVar3 < uVar4)))) {
    return uVar4 == *(ushort *)(param_1 + 0x14) + uVar1;
  }
  return false;
}


