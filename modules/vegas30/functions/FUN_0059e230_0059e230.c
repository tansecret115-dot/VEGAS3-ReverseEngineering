/* Module: vegas30.exe
   Function: FUN_0059e230
   Address: 0059e230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0059e407) */

long FUN_0059e230(void)

{
  long lVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 auStack_2c [2];
  _SYSTEM_INFO local_24;
  
  local_30 = (int *)0x0;
  lVar1 = Transport_QueryInternalInterface((_GUID *)&DAT_0060ed58,&local_30);
  if (-1 < lVar1) {
    hMem = GlobalAlloc(0x40,0xc);
    puVar2 = GlobalLock(hMem);
    if (puVar2 == (undefined4 *)0x0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      piVar3 = (int *)_SfList_CreateExZ_32(&local_38,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
      puVar2[1] = local_38;
      if ((piVar3 == (int *)0x0) &&
         (local_34 = piVar3, (**(code **)(*local_30 + 0x100))(local_30,&local_34),
         local_34 != (int *)0x0)) {
        puVar5 = auStack_2c;
        piVar3 = (int *)0x0;
        iVar4 = (**(code **)(*local_34 + 0xc))(local_34,1);
        while (iVar4 == 0) {
          local_38 = unaff_EBX;
          iVar4 = _SfList_InsertList_16(puVar5,*puVar5,&local_38,1);
          if (iVar4 != 0) {
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
            break;
          }
          iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,1,&stack0xffffffc4,0);
        }
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      piVar3 = (int *)_SfList_CreateExZ_32(&local_38,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
      *puVar2 = local_38;
      if ((piVar3 == (int *)0x0) &&
         (local_34 = piVar3, (**(code **)(*local_30 + 0x104))(local_30,&local_34),
         local_34 != (int *)0x0)) {
        puVar5 = auStack_2c;
        piVar3 = (int *)0x0;
        iVar4 = (**(code **)(*local_34 + 0xc))(local_34,1);
        while (iVar4 == 0) {
          iVar4 = _SfList_InsertList_16(puVar5,*puVar5,&local_38,1);
          if (iVar4 != 0) {
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
            break;
          }
          iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,1,&stack0xffffffc4,0);
        }
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      lVar1 = _SfList_CreateExZ_32(puVar2 + 2,0x98,0x10,0x10,0x40000004,0,0,0);
    }
    DAT_0065ad10 = puVar2;
    GetSystemInfo(&local_24);
    puVar2 = &DAT_0065ac78;
    for (iVar4 = 0x26; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (local_30 != (int *)0x0) {
      (**(code **)(*local_30 + 8))(local_30);
    }
  }
  return lVar1;
}


