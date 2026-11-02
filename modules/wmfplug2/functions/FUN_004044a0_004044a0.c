/* Module: wmfplug2.dll
   Function: FUN_004044a0
   Address: 004044a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004044a0(int *param_1,int *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  undefined2 *puVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *pMem;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  undefined2 *puStack_14;
  int *local_10;
  undefined2 *local_c;
  uint uStack_8;
  undefined4 *local_4;
  
  piVar6 = param_4;
  piVar1 = param_2;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  pvVar3 = GlobalAlloc(0x42,(int)param_2 * 2);
  local_c = GlobalLock(pvVar3);
  if (local_c == (undefined2 *)0x0) {
    iVar5 = -0x7ff8fff2;
  }
  else {
    pvVar3 = GlobalAlloc(0x42,(int)piVar1 * 4);
    puVar4 = GlobalLock(pvVar3);
    local_4 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      iVar5 = -0x7ff8fff2;
      pcVar8 = GlobalHandle_exref;
    }
    else {
      iVar5 = (**(code **)*param_1)(param_1,&DAT_0047b5e0,&local_10);
      pMem = puVar4;
      if (-1 < iVar5) {
        iVar7 = 0;
        if (0 < (int)piVar1) {
          puStack_14 = local_c;
          do {
            iVar5 = (**(code **)(*local_10 + 0x24))(local_10,iVar7,&param_2);
            if (-1 < iVar5) {
              iVar5 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_8);
              if (-1 < iVar5) {
                *puStack_14 = (short)uStack_8;
                if (param_3 == (uStack_8 & 0xffff)) {
                  *puVar4 = 2;
                  if (param_4 != (int *)0x0) {
                    *param_4 = (int)param_2;
                    (**(code **)(*param_2 + 4))(param_2);
                  }
                }
                else {
                  *puVar4 = 0;
                }
              }
              if (param_2 != (int *)0x0) {
                (**(code **)(*param_2 + 8))(param_2);
              }
              param_2 = (int *)0x0;
            }
            iVar7 = iVar7 + 1;
            puStack_14 = puStack_14 + 1;
            puVar4 = puVar4 + 1;
            pMem = local_4;
          } while (iVar7 < (int)piVar1);
        }
        if (local_10 != (int *)0x0) {
          (**(code **)(*local_10 + 8))(local_10);
        }
        local_10 = (int *)0x0;
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*param_1 + 0x20))(param_1,piVar1,local_c,pMem);
        }
      }
      pcVar8 = GlobalHandle_exref;
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
    puVar2 = local_c;
    pvVar3 = (HGLOBAL)(*pcVar8)(local_c);
    GlobalUnlock(pvVar3);
    pvVar3 = (HGLOBAL)(*pcVar8)(puVar2);
    GlobalFree(pvVar3);
    piVar6 = param_4;
    if (-1 < iVar5) {
      return iVar5;
    }
  }
  piVar1 = (int *)*piVar6;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *piVar6 = 0;
  return iVar5;
}


