/* Module: mp3plug.dll
   Function: FUN_5f68e210
   Address: 5f68e210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_5f68e210(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  LPVOID this;
  int *pMem;
  undefined4 unaff_EBX;
  int iVar4;
  int *unaff_EBP;
  undefined4 *puVar5;
  int iVar6;
  int unaff_retaddr;
  
  iVar4 = param_1;
  iVar6 = -0x7ff8fff2;
  puVar1 = FUN_5f68efc0(param_1);
  if (puVar1 != (undefined *)0x0) {
    iVar6 = (**(code **)**(undefined4 **)(iVar4 + 0x1c))
                      (*(undefined4 **)(iVar4 + 0x1c),&DAT_5f72bd50);
    if (-1 < iVar6) {
      uVar2 = (**(code **)(*unaff_EBP + 0x18))(unaff_EBP,0x2716,1);
      *(undefined4 *)(iVar4 + 0x30) = uVar2;
      (**(code **)(param_1 + 8))(&param_1);
      DAT_5f73cca0 = *(undefined4 *)(iVar4 + 0x30);
    }
    if ((*(int *)(iVar4 + 0x24) == 0) && (*(int *)(iVar4 + 0x2c) == 0)) {
      return -0x7ff8fff2;
    }
    iVar6 = FUN_5f68ef70(iVar4);
    if (-1 < iVar6) {
      pvVar3 = GlobalAlloc(0x40,0x130);
      this = GlobalLock(pvVar3);
      if ((this != (LPVOID)0x0) &&
         (pMem = (int *)FUN_5f68f290(this,iVar4,puVar1), pMem != (int *)0x0)) {
        if (unaff_retaddr != 0) {
          iVar6 = (**(code **)(*pMem + 0x1c))(pMem,unaff_retaddr);
        }
        if (-1 < iVar6) {
          if (param_2 == (undefined4 *)0x0) {
LAB_5f68e2fe:
            if ((-1 < iVar6) &&
               (iVar6 = (**(code **)*pMem)(pMem,&DAT_5f72bb80,unaff_EBX), -1 < iVar6)) {
              return iVar6;
            }
          }
          else {
            iVar4 = 0;
            puVar5 = param_2;
            do {
              if (param_1 <= iVar4) goto LAB_5f68e2fe;
              iVar6 = (**(code **)(*pMem + 0x3c))(pMem,*puVar5,iVar4);
              iVar4 = iVar4 + 1;
              puVar5 = puVar5 + 1;
            } while (-1 < iVar6);
          }
        }
        FUN_5f68f2f0(pMem);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
    }
  }
  return iVar6;
}


