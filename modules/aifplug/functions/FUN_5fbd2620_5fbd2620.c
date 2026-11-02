/* Module: aifplug.dll
   Function: FUN_5fbd2620
   Address: 5fbd2620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd2620(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  undefined8 uVar4;
  
  piVar2 = param_1;
  if (*(int *)(param_1[1] + 0x214) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  iVar1 = piVar2[1];
  piVar2[5] = param_2;
  piVar2[0x10] = *(int *)(iVar1 + 0x228);
  piVar2[0x11] = *(int *)(iVar1 + 0x22c);
  piVar2[0xc] = *(int *)(iVar1 + 0x238);
  piVar2[0xd] = *(int *)(iVar1 + 0x23c);
  piVar2[0xe] = *(int *)(iVar1 + 0x230);
  piVar2[0xf] = *(int *)(iVar1 + 0x234);
  FUN_5fbd2290(iVar1,&param_1);
  uVar4 = ftol();
  *(undefined8 *)(piVar2 + 8) = uVar4;
  piVar2[0x14] = 0;
  if ((LPCVOID)piVar2[0x15] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)piVar2[0x15]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)piVar2[0x15]);
    GlobalFree(pvVar3);
    piVar2[0x15] = 0;
  }
  FUN_5fbd2ef0((int)piVar2);
  (**(code **)(*piVar2 + 0x34))(piVar2,0,0);
  return 0;
}


