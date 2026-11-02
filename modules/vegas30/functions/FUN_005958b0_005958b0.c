/* Module: vegas30.exe
   Function: FUN_005958b0
   Address: 005958b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005958b0(LPVOID param_1,uint param_2)

{
  uint uVar1;
  HGLOBAL pvVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  LPVOID local_8;
  LPVOID local_4;
  
  iVar6 = *(int *)((int)param_1 + param_2 * 0x38 + 0x11c);
  uVar1 = *(uint *)((int)param_1 + param_2 * 0x38 + 0x120);
  pvVar2 = GlobalAlloc(2,iVar6 * 0x108);
  local_8 = GlobalLock(pvVar2);
  if (local_8 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  local_4 = local_8;
  iVar3 = _SfList_InsertList_16
                    (*(undefined4 *)((int)param_1 + param_2 * 0x38 + 0xf0),0xffffffff,&local_8,1);
  if (-1 < iVar3) {
    pvVar4 = param_1;
    if (uVar1 != 0) {
      pvVar2 = GlobalAlloc(2,uVar1 * iVar6);
      pvVar4 = GlobalLock(pvVar2);
      if (pvVar4 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      local_8 = pvVar4;
      iVar3 = _SfList_InsertList_16
                        (*(undefined4 *)((int)param_1 + param_2 * 0x38 + 0xf4),0xffffffff,&local_8,1
                        );
      if (iVar3 < 0) {
        return iVar3;
      }
    }
    *(int *)((int)param_1 + param_2 * 0x38 + 0xec) =
         *(int *)((int)param_1 + param_2 * 0x38 + 0xec) + iVar6;
    if (0 < iVar6) {
      local_8 = (LPVOID)((int)param_1 + param_2 * 0x38 + 0xf8);
      puVar7 = (uint *)((int)local_4 + 0x100);
      do {
        puVar7[-0x3c] = param_2;
        puVar7[-2] = uVar1;
        puVar7[-0x3e] = (uint)param_1;
        *puVar7 = -(uint)(uVar1 != 0) & (uint)pvVar4;
        _SfQueueInsert_8(local_8,puVar7 + -0x40);
        puVar7 = puVar7 + 0x42;
        pvVar4 = (LPVOID)((int)pvVar4 + uVar1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = 0;
    puVar5 = (undefined4 *)((int)param_1 + 0xf0);
    iVar3 = 3;
    do {
      iVar6 = iVar6 + (puVar5[0xc] + 0x108) * puVar5[0xb] * *(int *)*puVar5;
      puVar5 = puVar5 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar6 = iVar6 + (iVar6 >> 0x1f & 0x3ffU);
    DAT_0064b4b4 = (int)((iVar6 >> 10) + (iVar6 >> 0x1f & 0x3ffU)) >> 10;
    iVar3 = 0;
  }
  return iVar3;
}


