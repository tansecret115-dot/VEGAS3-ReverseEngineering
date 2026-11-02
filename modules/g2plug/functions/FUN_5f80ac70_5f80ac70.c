/* Module: g2plug.dll
   Function: FUN_5f80ac70
   Address: 5f80ac70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80ac70(HWND param_1)

{
  int iVar1;
  WPARAM wParam;
  int *lParam;
  int *unaff_ESI;
  int *piStack_158;
  int **appiStack_154 [2];
  undefined *puStack_14c;
  int *piStack_148;
  int *piStack_144;
  undefined1 *puStack_140;
  int *piStack_13c;
  int **ppiStack_138;
  int *piStack_124;
  undefined1 auStack_11c [284];
  
  ppiStack_138 = (int **)0x5f80ac86;
  FUN_5f80b140(param_1);
  ppiStack_138 = (int **)&DAT_5f86a4c0;
  piStack_13c = DAT_5f87749c;
  puStack_140 = (undefined1 *)0x5f80ac9a;
  iVar1 = (**(code **)*DAT_5f87749c)();
  if (iVar1 == 0) {
    puStack_140 = auStack_11c;
    piStack_144 = (int *)&DAT_5f86a4a0;
    piStack_148 = (int *)0x0;
    puStack_14c = &DAT_5f86a4b0;
    appiStack_154[0] = (int **)0x5f80acbe;
    iVar1 = (**(code **)(*piStack_124 + 0xc))();
    if (ppiStack_138 != (int **)0x0) {
      appiStack_154[0] = ppiStack_138;
      (*(code *)(*ppiStack_138)[2])();
      ppiStack_138 = (int **)0x0;
    }
    if (iVar1 == 0) {
      appiStack_154[0] = &piStack_13c;
      iVar1 = (**(code **)(*unaff_ESI + 0x10))();
      if (iVar1 == 0) {
        iVar1 = (**(code **)*piStack_144)(piStack_144,&DAT_5f86a3f0,&piStack_13c);
        if (piStack_144 != (int *)0x0) {
          (**(code **)(*piStack_144 + 8))(piStack_144);
          piStack_144 = (int *)0x0;
        }
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*piStack_13c + 0xc))(piStack_13c,&piStack_148);
          piStack_158 = unaff_ESI;
          while (iVar1 == 0) {
            iVar1 = (**(code **)*piStack_148)(piStack_148,&DAT_5f86a470,&puStack_14c);
            if (appiStack_154[0] != (int **)0x0) {
              (*(code *)(*appiStack_154[0])[2])(appiStack_154[0]);
              appiStack_154[0] = (int **)0x0;
            }
            if (-1 < iVar1) {
              iVar1 = (**(code **)(*piStack_158 + 0xc))(piStack_158,&puStack_140);
              if ((((-1 < iVar1) && (puStack_140 != (undefined1 *)0x52563130)) &&
                  (iVar1 = (**(code **)(*piStack_158 + 0x10))(piStack_158,&ppiStack_138,0x104),
                  -1 < iVar1)) &&
                 ((wParam = SendMessageA(param_1,0x143,0,(LPARAM)&ppiStack_138),
                  wParam != 0xffffffff && (lParam = calloc(1,8), lParam != (int *)0x0)))) {
                *lParam = (int)puStack_140;
                lParam[1] = (int)piStack_13c;
                SendMessageA(param_1,0x151,wParam,(LPARAM)lParam);
              }
              if (piStack_158 != (int *)0x0) {
                (**(code **)(*piStack_158 + 8))(piStack_158);
                piStack_158 = (int *)0x0;
              }
            }
            iVar1 = (**(code **)(*piStack_148 + 0x10))(piStack_148,appiStack_154);
          }
          if (piStack_13c != (int *)0x0) {
            (**(code **)(*piStack_13c + 8))(piStack_13c);
          }
        }
      }
      if (ppiStack_138 != (int **)0x0) {
        (*(code *)(*ppiStack_138)[2])(ppiStack_138);
      }
    }
  }
  return 0;
}


