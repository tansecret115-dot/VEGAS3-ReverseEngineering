/* Module: wmfplug2.dll
   Function: FUN_00402020
   Address: 00402020
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402020(int param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  LPVOID this;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int *piVar5;
  undefined4 *hObject;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return -0x7fffbffe;
  }
  pvVar1 = GlobalAlloc(0x40,600);
  this = GlobalLock(pvVar1);
  if ((this == (LPVOID)0x0) || (piVar2 = (int *)FUN_00402640(this,param_1), piVar2 == (int *)0x0)) {
    return -0x7ff8fff2;
  }
  piVar5 = piVar2;
  hObject = param_2;
  iVar3 = (**(code **)*piVar2)(piVar2,&DAT_0047abd0);
  if (iVar3 < 0) {
    FUN_004026a0(piVar2);
    pvVar1 = GlobalHandle(piVar2);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(piVar2);
    GlobalFree(pvVar1);
    return iVar3;
  }
  piVar2 = (int *)*param_2;
  (**(code **)(*piVar2 + 0x30))(piVar2,param_1);
  iVar4 = (*(code *)**(undefined4 **)*param_2)
                    ((undefined4 *)*param_2,&DAT_0047ac50,&stack0xfffffff0);
  if (-1 < iVar4) {
    (**(code **)(*piVar5 + 0xc))(piVar5,*(undefined4 *)(param_1 + 100));
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if ((unaff_ESI != 0) &&
     (iVar3 = (**(code **)(*(int *)*param_2 + 0x2c))((int *)*param_2,0,0x20), iVar3 < 0)) {
    (**(code **)(*(int *)*param_2 + 8))((int *)*param_2);
    *param_2 = 0;
    return iVar3;
  }
  if (hObject == (undefined4 *)0xffffffff) {
    return iVar3;
  }
  CloseHandle(hObject);
  return iVar3;
}


