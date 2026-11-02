/* Module: mp3plug.dll
   Function: FUN_5f6e5d10
   Address: 5f6e5d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e5d10(float *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = -1;
  iVar2 = 4;
  uVar3 = 0x100;
  do {
    FUN_5f6e5300(uVar3,iVar2,iVar1,param_1);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 4;
    uVar3 = (int)uVar3 >> 2;
  } while (iVar1 < 4);
  return;
}


