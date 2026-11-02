/* Module: vegas30k.dll
   Function: FUN_0105fba0
   Address: 0105fba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0105fba0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)param_1[0xd];
  if (piVar3 != (int *)0x0) goto LAB_0105fc1e;
  if (param_1[3] == 0) {
    pvVar1 = GlobalAlloc(0x40,0x140);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) goto LAB_0105fc0c;
    piVar3 = (int *)FUN_0105aa50(param_2);
  }
  else {
    pvVar1 = GlobalAlloc(0x40,0x28);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
LAB_0105fc0c:
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0105ad60(param_3,param_4,param_5,param_6);
    }
  }
  param_1[0xd] = (int)piVar3;
  if (piVar3 == (int *)0x0) {
    return -0x7ff8fff2;
  }
LAB_0105fc1e:
  psVar4 = (short *)(**(code **)(*piVar3 + 0x14))();
  if (*psVar4 == 0) {
    return -0x7ffb1ff9;
  }
  iVar5 = FUN_0105fae0();
  if ((iVar5 == 0) && (iVar6 = (**(code **)(*param_1 + 0xc))(param_1), iVar6 == 0)) {
    FUN_01060b00(1);
    return 1;
  }
  return iVar5;
}


