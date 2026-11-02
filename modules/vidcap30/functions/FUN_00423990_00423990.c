/* Module: vidcap30.exe
   Function: FUN_00423990
   Address: 00423990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00423b73) */

int FUN_00423990(int *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piStack_24;
  wchar_t *pwStack_20;
  
  pwStack_20 = param_2;
  piStack_24 = param_1;
  iVar2 = FUN_004237c0();
  if (-1 < iVar2) {
    pwVar1 = (wchar_t *)(param_1 + 0xd8);
    piStack_24 = (int *)0x1;
    pwStack_20 = pwVar1;
    iVar2 = FUN_00454ed0(param_1[199] + 0x28);
    if ((-1 < iVar2) && (piStack_24 = *(int **)pwVar1, piStack_24 != (int *)0x0)) {
      pwStack_20 = L"SF:DV Capture";
      iVar2 = (**(code **)(*(int *)param_1[0xd4] + 0xc))((int *)param_1[0xd4]);
      if ((-1 < iVar2) &&
         ((iVar2 = CoCreateInstance((IID *)&DAT_005a2db8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,
                                    (LPVOID *)(param_1 + 0xc9)), -1 < iVar2 &&
          (iVar2 = (**(code **)(*(int *)param_1[0xd4] + 0xc))
                             ((int *)param_1[0xd4],param_1[0xc9],L"SF:DV Mux"), -1 < iVar2)))) {
        pwStack_20 = (wchar_t *)0x0;
        iVar2 = FUN_00420460(&stack0xffffffec,1,&DAT_005a35a8,0,0,*(int *)pwVar1,&pwStack_20,
                             &stack0xfffffff0);
        if (-1 < iVar2) {
          piStack_24 = (int *)0x0;
          iVar2 = FUN_00420460(&stack0xffffffec,1,&DAT_005a35a8,0,0,param_1[0xcb],&piStack_24,
                               &stack0xfffffff0);
          if (iVar2 < 0) {
            iVar2 = FUN_004235a0(param_1,param_1[0xcb],1);
            if (-1 < iVar2) {
              if (((param_1[0x52] & 0x10U) != 0) && (DAT_005bb4d0 != 0)) {
                iVar2 = FUN_004235a0(param_1,param_1[0xcb],0);
              }
              if ((-1 < iVar2) &&
                 (iVar2 = FUN_00420460(&stack0xffffffec,1,0,0,0,param_1[0xc9],&stack0xffffffe4,
                                       &stack0xfffffff0), -1 < iVar2)) {
                iVar2 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                                  ((int *)param_1[0xd4],0,pwStack_20);
              }
            }
          }
          else {
            iVar2 = (**(code **)(*(int *)param_1[0xd4] + 0x2c))
                              ((int *)param_1[0xd4],piStack_24,pwStack_20);
            if (piStack_24 != (int *)0x0) {
              (**(code **)(*piStack_24 + 8))(piStack_24);
            }
            piStack_24 = (int *)0x0;
          }
          if (pwStack_20 != (wchar_t *)0x0) {
            (**(code **)(*(int *)pwStack_20 + 8))(pwStack_20);
          }
        }
      }
    }
  }
  return iVar2;
}


