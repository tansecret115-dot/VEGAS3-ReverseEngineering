/* Module: vegas30.exe
   Function: FUN_0043d540
   Address: 0043d540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0043d657) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0043d540(ISFCDDAE *param_1,undefined4 param_2,LPCSTR param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pMem;
  undefined4 uVar3;
  int iVar4;
  int *unaff_EBX;
  int iVar5;
  ISFCDDAE *pIVar6;
  LPCSTR lpFileName;
  bool bVar7;
  undefined8 uVar8;
  undefined4 unaff_retaddr;
  ISFCDDAE *local_40;
  undefined8 uStack_3c;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined2 local_20;
  
  lpFileName = param_3;
  iVar5 = 0;
  local_30 = 1;
  local_2e = 2;
  local_2c = 0xac44;
  local_24 = 0x100004;
  local_28 = 0x2b110;
  local_20 = 0;
  local_40 = (ISFCDDAE *)0x0;
  iVar1 = _SfDoesFileExist_4(param_3);
  if (iVar1 != 0) {
    DeleteFileA(lpFileName);
  }
  FUN_0043d3f0();
  iVar1 = FUN_0043d410(lpFileName,&local_30);
  if ((((iVar1 == 0) && (iVar1 = SfDAE_GetISFCDDAE(&local_40), iVar1 == 0)) &&
      (iVar1 = (**(code **)(*(int *)local_40 + 0xc))(local_40,param_2,DAT_0064b57c), iVar1 == 0)) &&
     (iVar1 = (**(code **)(*(int *)local_40 + 0x10))(local_40), iVar1 == 0)) {
    uStack_3c._0_4_ = (int)(0x4000 / (ulonglong)(longlong)(int)(local_24 & 0xffff));
    pvVar2 = GlobalAlloc(0x42,0x4000);
    pMem = GlobalLock(pvVar2);
    if (pMem != (LPVOID)0x0) {
      uStack_3c = (**(code **)(*(int *)local_40 + 0x1c))(local_40);
      pIVar6 = (ISFCDDAE *)0x0;
      do {
        if (uStack_3c <= CONCAT44(iVar5,pIVar6)) break;
        param_1 = (ISFCDDAE *)((int)uStack_3c - (int)pIVar6);
        if ((int)local_40 < (int)uStack_3c - (int)pIVar6) {
          param_1 = local_40;
        }
        iVar1 = (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,pMem,param_1,&param_1);
        if ((iVar1 != 0) || (param_1 == (ISFCDDAE *)0x0)) break;
        iVar1 = FUN_0043d470(pMem,(local_28 & 0xffff) * (int)param_1);
        bVar7 = CARRY4((uint)pIVar6,(uint)param_1);
        pIVar6 = pIVar6 + (int)param_1;
        iVar5 = iVar5 + ((int)param_1 >> 0x1f) + (uint)bVar7;
        uVar8 = __allmul(pIVar6,iVar5,100,0);
        uVar3 = __alldiv(uVar8,uStack_3c);
        iVar4 = FUN_00452710(unaff_retaddr,uVar3);
        if (iVar4 != 0) {
          iVar1 = -0x7ffb1ff4;
          break;
        }
        FUN_0043d4e0();
      } while (-1 < iVar1);
      (**(code **)(*unaff_EBX + 0x18))(unaff_EBX);
      FUN_0043d4b0();
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      FUN_0043d400();
      lpFileName = param_3;
      goto LAB_0043d73c;
    }
    iVar1 = -0x7ff8fff2;
  }
  FUN_0043d400();
LAB_0043d73c:
  if (local_40 != (ISFCDDAE *)0x0) {
    (**(code **)(*(int *)local_40 + 8))(local_40);
    local_40 = (ISFCDDAE *)0x0;
  }
  if (iVar1 < 0) {
    iVar5 = _SfDoesFileExist_4(lpFileName);
    if (iVar5 != 0) {
      DeleteFileA(lpFileName);
    }
  }
  return iVar1;
}


