/* Module: g2plug.dll
   Function: FUN_5f80aef0
   Address: 5f80aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80aef0(void)

{
  int iVar1;
  int *unaff_EBX;
  WPARAM wParam;
  int *unaff_EBP;
  int *unaff_EDI;
  int *local_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [264];
  HWND pHStack_8;
  
  wParam = 0;
  iVar1 = (**(code **)(*DAT_5f8774a0 + 0xc))(DAT_5f8774a0,0,&local_120);
  if (iVar1 == 0) {
    iVar1 = (**(code **)*unaff_EDI)(unaff_EDI,&DAT_5f86a440,&stack0xfffffedc);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*unaff_EBX + 0x24))(unaff_EBX,&uStack_118);
      if (iVar1 == 0) {
        iVar1 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a4c0,&stack0xfffffed8);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*unaff_EBP + 0xc))
                            (unaff_EBP,&DAT_5f86a4b0,0,&DAT_5f86a4a0,&piStack_11c);
          if (unaff_EBP != (int *)0x0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*piStack_11c + 0x14))(piStack_11c,uStack_118,uStack_114,&local_120)
            ;
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*local_120 + 0x10))(local_120,auStack_110,0x104);
              if (-1 < iVar1) {
                wParam = SendMessageA(pHStack_8,0x158,0,(LPARAM)auStack_110);
              }
              if (local_120 != (int *)0x0) {
                (**(code **)(*local_120 + 8))(local_120);
                local_120 = (int *)0x0;
              }
            }
            if (piStack_11c != (int *)0x0) {
              (**(code **)(*piStack_11c + 8))(piStack_11c);
            }
          }
        }
      }
      if (unaff_EBX != (int *)0x0) {
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      }
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  SendMessageA(pHStack_8,0x14e,wParam,0);
  return 0;
}


