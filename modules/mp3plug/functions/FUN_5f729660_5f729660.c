/* Module: mp3plug.dll
   Function: FUN_5f729660
   Address: 5f729660
   Source: Ghidra pseudocode (Stage 10 batch) */


short FUN_5f729660(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4,short *param_5,
                  undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  short sVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  FARPROC pFVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_3c [15];
  
  sVar1 = FUN_5f729620(local_3c);
  if (sVar1 != 0) {
    param_2._0_2_ = -0x23;
    if ((param_3 & 0x20000000) == 0) {
      MessageBoxA((HWND)0x0,s_KeyAccess_must_be_loaded_in_orde_5f74d1fc,"",0x30);
    }
    goto LAB_5f7297cf;
  }
  pvVar2 = GlobalAlloc(0x42,0x4ac);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    param_2._0_2_ = -1;
    goto LAB_5f7297cf;
  }
  pFVar3 = GetProcAddress(DAT_5f75bbb4,s_KALib_Validate_5f74d1c0);
  if (pFVar3 == (FARPROC)0x0) {
    param_2._0_2_ = -0x2717;
    goto LAB_5f7297cf;
  }
  pMem[1] = param_3;
  *pMem = 0x352;
  pMem[2] = (param_2 & 0xff00 | param_2 << 0x10) << 8 | (uint)CONCAT11(param_2._2_1_,param_2._3_1_);
  if (param_6 != (undefined4 *)0x0) {
    puVar6 = pMem + 5;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_6;
      param_6 = param_6 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    puVar6 = pMem + 0x12;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  iVar4 = (*pFVar3)(pMem,pMem + 0x52,0xfffffc9c);
  param_2._0_2_ = (short)iVar4;
  if ((short)param_2 == 0) {
    *param_8 = pMem[0x52];
LAB_5f729789:
    sVar1 = *(short *)(pMem + 0x94);
    param_5[1] = 0;
    *param_5 = sVar1;
    puVar6 = pMem + 0x95;
    for (uVar5 = (uint)(int)sVar1 >> 2; param_5 = param_5 + 2, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_5 = *puVar6;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = (int)sVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)param_5 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      param_5 = (short *)((int)param_5 + 1);
    }
  }
  else if ((short)param_2 == -0x2713) {
    if (0x200 < (int)pMem[0x94]) {
      pMem[0x94] = 0x200;
    }
    goto LAB_5f729789;
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
LAB_5f7297cf:
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (((short)param_2 != 0) && ((param_3 & 0x40000000) == 0)) {
                    /* WARNING: Subroutine does not return */
    ExitProcess(0);
  }
  return (short)param_2;
}


