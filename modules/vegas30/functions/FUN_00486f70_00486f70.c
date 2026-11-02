/* Module: vegas30.exe
   Function: FUN_00486f70
   Address: 00486f70
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00486f70(undefined4 param_1,undefined4 *param_2,HWND__ *param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,HSFCD__ *param_7,undefined4 param_8)

{
  HGLOBAL hMem;
  int *piVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *unaff_ESI;
  undefined4 *puVar5;
  ISFCDINGDATA *local_14;
  HSFCD__ *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  HWND__ *local_4;
  
  hMem = GlobalAlloc(0x40,0x138);
  piVar1 = GlobalLock(hMem);
  iVar4 = 0;
  if (piVar1 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  piVar1[1] = 1;
  *piVar1 = (int)&PTR_LAB_00610724;
  piVar1[0x48] = 0;
  iVar2 = FUN_00452640(param_1,"Configuring for Write",100,1);
  piVar1[2] = iVar2;
  piVar1[0x49] = 0;
  piVar1[0x4b] = 0;
  piVar1[0x4c] = 0;
  local_8 = (undefined4 *)0x0;
  local_10 = param_7;
  local_c = param_8;
  local_4 = param_3;
  if (param_2 == (undefined4 *)0x0) {
    FUN_0043fc90(&local_8);
  }
  else {
    local_8 = param_2;
  }
  local_14 = (ISFCDINGDATA *)0x0;
  lVar3 = SfCDING_GetISFCDINGDATA(&local_14);
  if (local_14 != (ISFCDINGDATA *)0x0) {
    lVar3 = (**(code **)(*(int *)local_14 + 0xc))(local_14,&local_10);
    if (-1 < lVar3) {
      if (0 < param_4) {
        puVar5 = param_2;
        do {
          if (lVar3 < 0) goto LAB_004870c4;
          lVar3 = (**(code **)(*unaff_ESI + 0x10))
                            (unaff_ESI,*puVar5,
                             *(undefined4 *)(((int)param_3 - (int)param_2) + (int)puVar5));
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < param_4);
      }
      if (-1 < lVar3) {
        lVar3 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,piVar1);
        (**(code **)(*piVar1 + 8))(piVar1);
        piVar1 = (int *)0x0;
        SfCDUI_CD_ShowErrorBox(local_4,lVar3,local_10,1);
        cdr_Eject(local_10,1);
      }
    }
LAB_004870c4:
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (param_2 == (undefined4 *)0x0) {
    FUN_0043fd20(local_8);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return lVar3;
}


