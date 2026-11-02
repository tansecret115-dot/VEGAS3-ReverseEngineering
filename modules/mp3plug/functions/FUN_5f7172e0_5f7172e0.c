/* Module: mp3plug.dll
   Function: FUN_5f7172e0
   Address: 5f7172e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f7172e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      iVar2 = iVar4;
      do {
        iVar1 = iVar2 + iVar3;
        iVar2 = iVar2 + 4;
        *(undefined4 *)(param_1 + 0xdc + iVar1) = 0;
      } while (iVar2 < iVar4 + 0x48);
      iVar4 = iVar4 + 0x48;
    } while (iVar4 < 0x900);
    iVar3 = iVar3 + 0x900;
  } while (iVar3 < 0x1200);
  return;
}


