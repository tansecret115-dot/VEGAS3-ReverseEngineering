/* Module: sfcdi.dll
   Function: SfTAO_Create
   Address: 5bf17f40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfTAO_Create(void * *,struct taoburntag *) */

long SfTAO_Create(void **param_1,taoburntag *param_2)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  
                    /* 0x17f40  133  ?SfTAO_Create@@YGJPAPAXPAUtaoburntag@@@Z */
  hMem = GlobalAlloc(0x42,0x98);
  puVar1 = GlobalLock(hMem);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 1;
    }
    if ((uint)puVar1[5] < 0x20) {
      puVar1[5] = 0x20;
    }
    if (puVar1[6] != 0) {
      iVar3 = FUN_5bf17210((int)puVar1);
      puVar1[8] = iVar3;
      uVar2 = (**(code **)(*(int *)puVar1[6] + 0x20))();
      puVar1[9] = uVar2;
    }
    (**(code **)(*(int *)puVar1[7] + 4))((int *)puVar1[7]);
    *unaff_retaddr = puVar1;
    return 0;
  }
  return -0x7ff8fff2;
}


