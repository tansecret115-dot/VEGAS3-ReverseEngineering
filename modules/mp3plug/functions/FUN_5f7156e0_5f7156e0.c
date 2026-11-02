/* Module: mp3plug.dll
   Function: FUN_5f7156e0
   Address: 5f7156e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f7156e0(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(*(int *)((int)this + 0x8644) + 4))();
  if (param_1 != '\0') {
    FUN_5f7172e0((int)this + 0x30);
    FUN_5f719200((undefined4 *)((int)this + 0x1310));
    FUN_5f719b90((int)this + 0x2324);
    iVar3 = 0;
    do {
      iVar1 = (int)this + iVar3;
      iVar2 = (int)this + iVar3 + 0x900;
      iVar4 = (iVar2 - iVar1 & 0xfffffff8U) + iVar1;
      for (; iVar1 < iVar4; iVar1 = iVar1 + 8) {
        *(undefined4 *)(iVar1 + 0x8b58) = 0;
        *(undefined4 *)(iVar1 + 0x8b5c) = 0;
      }
      for (; iVar1 < iVar2; iVar1 = iVar1 + 4) {
        *(undefined4 *)(iVar1 + 0x8b58) = 0;
      }
      iVar3 = iVar3 + 0x900;
    } while (iVar3 < 0x1200);
    iVar3 = 0;
    do {
      iVar1 = 0;
      do {
        iVar2 = iVar1;
        do {
          iVar4 = iVar2 + iVar3;
          iVar2 = iVar2 + 4;
          *(undefined4 *)((int)this + iVar4 + 0x9d58) = 0;
        } while (iVar2 < iVar1 + 0x48);
        iVar1 = iVar1 + 0x48;
      } while (iVar1 < 0x900);
      iVar3 = iVar3 + 0x900;
    } while (iVar3 < 0x1200);
    iVar3 = 0;
    do {
      iVar1 = 0;
      do {
        iVar2 = iVar1;
        do {
          iVar4 = iVar2 + iVar3;
          iVar2 = iVar2 + 4;
          *(undefined4 *)((int)this + iVar4 + 0xaf58) = 0;
        } while (iVar2 < iVar1 + 0x80);
        iVar1 = iVar1 + 0x80;
      } while (iVar1 < 0x900);
      iVar3 = iVar3 + 0x900;
    } while (iVar3 < 0x1200);
  }
  return;
}


