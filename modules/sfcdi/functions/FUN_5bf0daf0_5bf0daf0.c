/* Module: sfcdi.dll
   Function: FUN_5bf0daf0
   Address: 5bf0daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf0daf0(LPCSTR param_1,LPCSTR param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  HANDLE hObject;
  HGLOBAL pvVar4;
  uint uVar5;
  
  uVar5 = 0;
  hObject = CreateFileA(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    param_1 = (LPCSTR)0x0;
    uVar1 = *param_3;
    if (uVar1 != 0) {
      do {
        iVar2 = *(int *)(param_3[2] + uVar5 * 4);
        FUN_5bf0d570(hObject,iVar2,0x164);
        uVar3 = *(uint *)(iVar2 + 0x160);
        if (uVar3 != 0) {
          FUN_5bf0d570(hObject,iVar2 + 0x164,uVar3);
        }
        uVar5 = uVar5 + 1;
        param_1 = param_1 + uVar3 + 0x164;
      } while (uVar5 < uVar1);
    }
    FUN_5bf0d630(hObject,&param_3,&param_1);
    FUN_5bf0da50(param_2,param_3,(uint)param_1);
    if (param_3 != (uint *)0x0) {
      pvVar4 = GlobalHandle(param_3);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(param_3);
      GlobalFree(pvVar4);
    }
    CloseHandle(hObject);
    return 0;
  }
  return 0x8004e006;
}


