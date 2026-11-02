/* Module: vegas30k.dll
   Function: FUN_01041360
   Address: 01041360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01041360(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  
  puVar4 = param_1;
  piVar2 = (int *)param_1[0x1a];
  puVar1 = param_1 + 0x1a;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
    *param_1 = *puVar1;
    return 0;
  }
  iVar5 = _SfAudio_CreateGraphObject_4(puVar1);
  if (-1 < iVar5) {
    iVar5 = (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_011f0eb0,&param_1);
    if (iVar5 < 0) {
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      return iVar5;
    }
    (**(code **)(*unaff_ESI + 0x20))(unaff_ESI);
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    (**(code **)(*(int *)*puVar1 + 0x6c))((int *)*puVar1,1,puVar4 + 0x1b);
    (**(code **)(*(int *)*puVar1 + 0x6c))((int *)*puVar1,0,puVar4 + 0xc);
    iVar5 = (**(code **)(*(int *)*puVar1 + 0x40))((int *)*puVar1,0,&LAB_01041fa0,puVar4);
    puVar3 = (undefined4 *)puVar4[0xe];
    (**(code **)(*(int *)*puVar1 + 0x44))((int *)*puVar1);
    (**(code **)(*(int *)*puVar1 + 0x60))((int *)*puVar1,puVar4 + 2,puVar4[0x13]);
    (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1);
    *puVar3 = *puVar1;
  }
  return iVar5;
}


