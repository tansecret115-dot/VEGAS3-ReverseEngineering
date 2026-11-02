/* Module: vegas30k.dll
   Function: FUN_010405f0
   Address: 010405f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010405f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 8) = 1;
  hMem = GlobalAlloc(0x40,0x168);
  pvVar2 = GlobalLock(hMem);
  if (pvVar2 == (LPVOID)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_01136330(0);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,param_2,0);
  if (iVar4 != 0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    return iVar4;
  }
  puVar5 = calloc(1,0x228);
  *puVar5 = piVar3;
  puVar5[0x85] = 0;
  puVar5[0x81] = DAT_011dab90;
  puVar5[0x82] = DAT_011dab94;
  puVar5[0x83] = DAT_011dab98;
  uVar1 = DAT_011dab9c;
  puVar5[0x89] = 0;
  puVar5[0x86] = param_1;
  puVar5[0x84] = uVar1;
  *(undefined4 **)(param_1 + 0xc) = puVar5;
  return 0;
}


