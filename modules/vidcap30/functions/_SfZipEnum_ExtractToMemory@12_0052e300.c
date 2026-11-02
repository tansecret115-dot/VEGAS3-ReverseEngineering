/* Module: vidcap30.exe
   Function: _SfZipEnum_ExtractToMemory@12
   Address: 0052e300
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZipEnum_ExtractToMemory_12(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  LPVOID pMem;
  uint unaff_EBX;
  uint unaff_EBP;
  code *pcVar4;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_1c;
  undefined4 *puStack_14;
  undefined1 auStack_c [12];
  
                    /* 0x12e300  691  _SfZipEnum_ExtractToMemory@12 */
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined4 *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  uStack_3c = *(undefined4 *)(param_2 + 0x20);
  iStack_40 = *(int *)(param_1 + 8);
  uStack_34 = 0;
  uStack_38 = 0;
  (**(code **)(*(int *)(param_1 + 0xc) + 4))();
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))
                    (*(undefined4 *)(param_1 + 8),&stack0xffffffd0,0x1e,auStack_c);
  if (((iVar1 == 0) || (iStack_1c != 0x1e)) ||
     ((iStack_40 != 0x4034b50 && (iStack_40 != 0x30304b50)))) {
    return -0x7ffb1ff8;
  }
  pvVar2 = GlobalAlloc(0x42,*(int *)(param_2 + 0x10) + 4);
  pvVar3 = GlobalLock(pvVar2);
  if ((pvVar3 == (LPVOID)0x0) || (*(SIZE_T *)(param_2 + 0x14) == 0)) {
    return -0x7ff8fff2;
  }
  pvVar2 = GlobalAlloc(0x42,*(SIZE_T *)(param_2 + 0x14));
  pMem = GlobalLock(pvVar2);
  if (pMem == (LPVOID)0x0) {
    iVar1 = -0x7ff8fff2;
    pcVar4 = GlobalHandle_exref;
  }
  else {
    (**(code **)(*(int *)(param_1 + 0xc) + 4))
              (*(undefined4 *)(param_1 + 8),
               (unaff_EBX & 0xffff) + (unaff_EBP >> 0x10) + 0x1e + *(int *)(param_2 + 0x20),0,0);
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))
                      (*(undefined4 *)(param_1 + 8),pvVar3,*(undefined4 *)(param_2 + 0x10),
                       &stack0xffffffd4);
    if ((iVar1 == 0) || (*(int *)(param_2 + 0x10) != 0x1e)) {
      iVar1 = -0x7ffb1ff8;
    }
    else {
      iVar1 = FUN_0052e290(param_1,param_2,&iStack_40,pvVar3,pMem);
      if (-1 < iVar1) {
        *puStack_14 = pMem;
        pcVar4 = GlobalHandle_exref;
        goto LAB_0052e45a;
      }
    }
    pcVar4 = GlobalHandle_exref;
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
LAB_0052e45a:
  pvVar2 = (HGLOBAL)(*pcVar4)(pvVar3);
  GlobalUnlock(pvVar2);
  pvVar2 = (HGLOBAL)(*pcVar4)(pvVar3);
  GlobalFree(pvVar2);
  return iVar1;
}


