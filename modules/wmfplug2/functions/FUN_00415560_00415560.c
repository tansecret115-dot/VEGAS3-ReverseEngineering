/* Module: wmfplug2.dll
   Function: FUN_00415560
   Address: 00415560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415560(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                undefined4 param_6,uint param_7,undefined4 param_8,int param_9)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int *unaff_EBX;
  int *unaff_EBP;
  LPVOID pMem;
  int *unaff_ESI;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 unaff_retaddr;
  uint local_1c;
  int *local_14;
  uint uStack_10;
  int *piStack_8;
  int *piStack_4;
  
  local_14 = (int *)0x0;
  pMem = (LPVOID)0x0;
  iVar2 = (**(code **)*param_2)(param_2,&DAT_0047c7e0,&local_14);
  if ((-1 < iVar2) && (iVar2 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,&DAT_0047b640), -1 < iVar2)
     ) {
    local_1c = 0;
    if (uStack_10 != 0) {
      do {
        iVar2 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,&DAT_0047b640,local_1c);
        if (iVar2 < 0) goto LAB_0041588c;
        piStack_4 = (int *)0x0;
        if (local_14 != (int *)0x0) {
          do {
            if (unaff_ESI != (int *)0x0) {
              (**(code **)(*unaff_ESI + 8))();
              unaff_ESI = (int *)0x0;
            }
            iVar2 = (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,&DAT_0047b640,local_1c,piStack_4);
            if (iVar2 < 0) goto LAB_0041588c;
            if (unaff_EBP != (int *)0x0) {
              (**(code **)(*unaff_EBP + 8))();
              unaff_EBP = (int *)0x0;
            }
            iVar2 = (**(code **)*unaff_ESI)(unaff_ESI,&DAT_0047b620);
            if ((iVar2 < 0) || (iVar2 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,0), iVar2 < 0))
            goto LAB_0041588c;
            if (pMem != (LPCVOID)0x0) {
              pvVar3 = GlobalHandle(pMem);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(pMem);
              GlobalFree(pvVar3);
            }
            pvVar3 = GlobalAlloc(0x40,0);
            pMem = GlobalLock(pvVar3);
            if (pMem == (LPVOID)0x0) {
              iVar2 = -0x7ff8fff2;
              goto LAB_0041588c;
            }
            iVar2 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,pMem);
            if (iVar2 < 0) goto LAB_0041588c;
            iVar4 = 4;
            bVar7 = true;
            piVar5 = (int *)((int)pMem + 0x2c);
            piVar6 = &DAT_0047c0e8;
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar7 = *piVar5 == *piVar6;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            } while (bVar7);
            if ((bVar7) && (*(int *)(*(int *)((int)pMem + 0x44) + 0x40) == param_1)) break;
            if (unaff_ESI != (int *)0x0) {
              (**(code **)(*unaff_ESI + 8))();
              unaff_ESI = (int *)0x0;
            }
            piStack_4 = (int *)((int)piStack_4 + 1);
          } while (piStack_4 < local_14);
        }
        if (iVar2 < 0) goto LAB_0041588c;
      } while ((unaff_ESI == (int *)0x0) && (local_1c = local_1c + 1, local_1c < uStack_10));
    }
    puVar1 = param_2;
    if (-1 < iVar2) {
      if (unaff_ESI == (int *)0x0) {
        iVar2 = -0x3ff2f43c;
      }
      else {
        iVar2 = *(int *)((int)pMem + 0x44);
        *(undefined4 **)(iVar2 + 0x20) = param_2;
        *(undefined4 *)(iVar2 + 8) = param_3;
        *(undefined4 *)(iVar2 + 0xc) = param_4;
        *(undefined4 *)(iVar2 + 0x18) = param_3;
        *(undefined4 *)(iVar2 + 0x1c) = param_4;
        *(undefined4 *)(iVar2 + 0x34) = param_3;
        *(undefined4 *)(iVar2 + 0x38) = param_4;
        uVar8 = __alldiv(10000000,0,param_5,0);
        *(undefined8 *)(iVar2 + 0x28) = uVar8;
        iVar2 = (**(code **)(*unaff_EBP + 0x24))(unaff_EBP);
        if (-1 < iVar2) {
          iVar2 = *unaff_EBP;
          lVar9 = __allmul(param_7,0,10000000,0);
          iVar2 = (**(code **)(iVar2 + 0x1c))(unaff_EBP,lVar9);
          if ((-1 < iVar2) &&
             (iVar2 = FUN_00414480(unaff_ESI,unaff_retaddr,L"Video Stream",L"Video",puVar1),
             -1 < iVar2)) {
            if (param_9 != 0) {
              piStack_4 = (int *)0x0;
              iVar2 = (**(code **)*unaff_ESI)(unaff_ESI,&DAT_0047c7c0);
              if (-1 < iVar2) {
                param_1 = 1;
                (**(code **)(*piStack_4 + 0x14))(piStack_4,L"_VBRENABLED",3,&param_1);
                (**(code **)(iRam00000000 + 8))(0);
              }
            }
            iVar2 = (**(code **)(*piStack_8 + 0x34))(piStack_8);
          }
        }
      }
    }
  }
LAB_0041588c:
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))();
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))();
  }
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))();
  }
  if (pMem != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return iVar2;
}


