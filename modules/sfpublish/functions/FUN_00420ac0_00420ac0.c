/* Module: sfpublish.dll
   Function: FUN_00420ac0
   Address: 00420ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420ac0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = InternetOpenA("SfPublish",1,0,0);
  if (uVar2 != 0) {
    do {
      FUN_00420530(0);
      iVar1 = iRam0000003c;
      if (iRam0000003c == 100) {
        iVar3 = 0;
      }
      else if (iRam0000003c == 200) {
        iVar3 = FUN_00420c40((void *)0x0,uVar2);
      }
      else {
        iVar3 = -0x7fffbffb;
      }
      FUN_00420590((void *)0x0,iVar3,0);
    } while ((iRam00000034 == 0) && (iVar1 != 100));
    InternetCloseHandle(uVar2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)0x8);
  CloseHandle(pvRam00000040);
  pvRam00000040 = (HANDLE)0x0;
  uRam00000044 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)0x8);
  FUN_00420490((undefined4 *)0x0);
  return 0;
}


