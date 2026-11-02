/* Module: sctplug.dll
   Function: FUN_00406240
   Address: 00406240
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00406240(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = param_3;
  piVar3 = *(int **)((int)this + 0xd8);
  if (piVar3 == (int *)0x0) {
    iVar4 = -0x7ff8ffa9;
  }
  else {
    iVar5 = 0;
    if (0 < *piVar3) {
      piVar6 = (int *)piVar3[2];
      do {
        piVar1 = (int *)*piVar6;
        if ((((piVar1 != (int *)0x0) && ((int *)*piVar1 == param_1)) && (piVar1[1] == param_2)) &&
           ((piVar1[2] == param_3 && (piVar1[3] == param_4)))) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < *piVar3);
    }
    pvVar2 = GlobalAlloc(0x42,0x10);
    piVar3 = GlobalLock(pvVar2);
    if (piVar3 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    *piVar3 = (int)param_1;
    piVar3[2] = iVar4;
    piVar3[1] = param_2;
    piVar3[3] = param_4;
    param_1 = piVar3;
    iVar4 = FUN_0041b570(*(int **)((int)this + 0xd8),-1,(int *)&param_1,1);
    if (iVar4 < 0) {
      pvVar2 = GlobalHandle(piVar3);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(piVar3);
      GlobalFree(pvVar2);
      return iVar4;
    }
  }
  return iVar4;
}


