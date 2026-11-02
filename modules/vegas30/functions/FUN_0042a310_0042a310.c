/* Module: vegas30.exe
   Function: FUN_0042a310
   Address: 0042a310
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0042a310(HWND__ *param_1,undefined4 ***param_2,undefined4 param_3,undefined4 param_4,
                 HSFCD__ *param_5,undefined4 param_6)

{
  HGLOBAL hMem;
  int *piVar1;
  int iVar2;
  long lVar3;
  int *unaff_ESI;
  undefined4 ***pppuVar4;
  ISFCDINGVCD *local_118;
  HSFCD__ *local_114;
  undefined4 local_110;
  undefined4 **local_10c;
  undefined4 local_108;
  
  hMem = GlobalAlloc(0x40,0x138);
  piVar1 = GlobalLock(hMem);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 1;
    *piVar1 = (int)&PTR_LAB_00610724;
    piVar1[0x48] = 0;
    iVar2 = FUN_00452640(param_1,"Burning VCD",100,1);
    piVar1[2] = iVar2;
    piVar1[0x49] = 0;
    piVar1[0x4b] = 0;
    piVar1[0x4c] = 0;
    local_10c = (undefined4 ***)0x0;
    local_108 = param_3;
    local_114 = param_5;
    local_110 = param_6;
    if (param_2 == (undefined4 ***)0x0) {
      FUN_0043fc90(&local_10c);
    }
    else {
      local_10c = param_2;
    }
    local_118 = (ISFCDINGVCD *)0x0;
    lVar3 = SfCDING_GetISFCDINGVCD(&local_118);
    if (local_118 != (ISFCDINGVCD *)0x0) {
      lVar3 = (**(code **)(*(int *)local_118 + 0xc))(local_118,&local_114);
      if (-1 < lVar3) {
        pppuVar4 = param_2;
        if (param_2 == (undefined4 ***)0x0) {
          iVar2 = FUN_0042a270(param_1,&local_10c,0x104);
          if (-1 < iVar2) {
            pppuVar4 = &local_10c;
          }
        }
        lVar3 = (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,pppuVar4);
        if (-1 < lVar3) {
          lVar3 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,piVar1);
          cdr_Eject(local_114,1);
          SfCDUI_CD_ShowErrorBox(param_1,lVar3,local_114,1);
        }
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (param_2 == (undefined4 ***)0x0) {
      FUN_0043fd20(local_10c);
    }
    (**(code **)(*piVar1 + 8))(piVar1);
    return lVar3;
  }
  return -0x7ff8fff2;
}


