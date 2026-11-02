/* Module: sfmarket2.dll
   Function: FUN_0040ec60
   Address: 0040ec60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ec60(int ***param_1,int ***param_2,undefined4 *param_3)

{
  int ***pppiVar1;
  HGLOBAL hMem;
  LPVOID this;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  undefined4 uStack_4;
  
  *param_3 = 0;
  hMem = GlobalAlloc(0x40,0x128);
  this = GlobalLock(hMem);
  if (this == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  puVar2 = (undefined4 *)FUN_0040e9c0(this,param_2);
  pppiVar1 = param_1;
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  local_8 = 0;
  iVar3 = FUN_0040ef30((int)&local_8,4,(int *)param_1);
  if (iVar3 < 0) goto LAB_0040ee2a;
  if (local_8 != 0x4f120f) {
    iVar3 = -0x7ffb1f50;
    goto LAB_0040ee2a;
  }
  iVar3 = FUN_0040ee40(pppiVar1);
  if ((iVar3 < 0) || (iVar3 = FUN_0040ee40(pppiVar1), iVar3 < 0)) goto LAB_0040ee2a;
  param_2 = (int ***)0x0;
  param_1 = (int ***)0x0;
  iVar3 = (*(code *)(*pppiVar1)[3])(pppiVar1,&param_1,4,&param_2);
  if (-1 < iVar3) {
    if (param_2 == (int ***)0x4) {
      if (param_1 == (int ***)0x4) {
        param_2 = (int ***)0x0;
        iVar3 = (*(code *)(*pppiVar1)[3])(pppiVar1,&uStack_4,4,&param_2);
        if (-1 < iVar3) {
          if (param_1 != param_2) goto LAB_0040ed5e;
          puVar2[4] = uStack_4;
        }
      }
      else {
        iVar3 = -0x7ffb1f50;
      }
    }
    else {
LAB_0040ed5e:
      iVar3 = -0x7ffb1fc8;
    }
  }
  if ((iVar3 < 0) || (iVar3 = FUN_0040ef30((int)(puVar2 + 3),4,(int *)pppiVar1), iVar3 < 0))
  goto LAB_0040ee2a;
  param_2 = (int ***)0x0;
  param_1 = (int ***)0x0;
  iVar3 = (*(code *)(*pppiVar1)[3])(pppiVar1,&param_1,4,&param_2);
  if (-1 < iVar3) {
    if (param_2 == (int ***)0x4) {
      if (param_1 == (int ***)0x4) {
        param_2 = (int ***)0x0;
        iVar3 = (*(code *)(*pppiVar1)[3])(pppiVar1,&uStack_4,4,&param_2);
        if (-1 < iVar3) {
          if (param_1 != param_2) goto LAB_0040ede6;
          puVar2[5] = uStack_4;
        }
      }
      else {
        iVar3 = -0x7ffb1f50;
      }
    }
    else {
LAB_0040ede6:
      iVar3 = -0x7ffb1fc8;
    }
  }
  if (((-1 < iVar3) && (iVar3 = FUN_0040ef30((int)(puVar2 + 6),4,(int *)pppiVar1), -1 < iVar3)) &&
     (iVar3 = FUN_0040ef30((int)(puVar2 + 7),4,(int *)pppiVar1), -1 < iVar3)) {
    *param_3 = puVar2;
    return iVar3;
  }
LAB_0040ee2a:
  (**(code **)*puVar2)(1);
  return iVar3;
}


