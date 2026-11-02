/* Module: wmfplug2.dll
   Function: FUN_00402035
   Address: 00402035
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402035(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  HGLOBAL pvVar1;
  LPVOID this;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int unaff_ESI;
  int *piVar5;
  undefined4 *hObject;
  
  pvVar1 = GlobalAlloc(0x40,600);
  this = GlobalLock(pvVar1);
  if ((this == (LPVOID)0x0) || (piVar2 = (int *)FUN_00402640(this,unaff_EBP), piVar2 == (int *)0x0))
  {
    return -0x7ff8fff2;
  }
  piVar5 = piVar2;
  hObject = param_3;
  iVar3 = (**(code **)*piVar2)(piVar2,&DAT_0047abd0);
  if (iVar3 < 0) {
    FUN_004026a0(piVar2);
    pvVar1 = GlobalHandle(piVar2);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(piVar2);
    GlobalFree(pvVar1);
    return iVar3;
  }
  piVar2 = (int *)*param_3;
  (**(code **)(*piVar2 + 0x30))(piVar2,param_2);
  iVar4 = (*(code *)**(undefined4 **)*param_3)
                    ((undefined4 *)*param_3,&DAT_0047ac50,&stack0xfffffff4);
  if (-1 < iVar4) {
    (**(code **)(*piVar5 + 0xc))(piVar5,*(undefined4 *)(unaff_EBP + 100));
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if ((unaff_ESI != 0) &&
     (iVar3 = (**(code **)(*(int *)*param_3 + 0x2c))((int *)*param_3,0,0x20), iVar3 < 0)) {
    (**(code **)(*(int *)*param_3 + 8))((int *)*param_3);
    *param_3 = 0;
    return iVar3;
  }
  if (hObject == (undefined4 *)0xffffffff) {
    return iVar3;
  }
  CloseHandle(hObject);
  return iVar3;
}


