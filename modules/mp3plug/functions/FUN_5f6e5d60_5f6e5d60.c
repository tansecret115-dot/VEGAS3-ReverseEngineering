/* Module: mp3plug.dll
   Function: FUN_5f6e5d60
   Address: 5f6e5d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6e5d60(float *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = 3;
  uVar2 = 1;
  iVar3 = 0x400;
  do {
    FUN_5f6e57d0(uVar2,iVar3,iVar1,param_1);
    iVar1 = iVar1 + -1;
    uVar2 = uVar2 * 4;
    iVar3 = iVar3 >> 2;
  } while (-2 < iVar1);
  return;
}


