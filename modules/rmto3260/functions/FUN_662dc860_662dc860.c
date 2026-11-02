/* Module: rmto3260.dll
   Function: FUN_662dc860
   Address: 662dc860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662dc860(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  LPSTR lpBuffer;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  LPSTR *lpFilePart;
  
  piVar3 = param_1;
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  lpFilePart = (LPSTR *)0x0;
  piVar1 = param_1 + 6;
  lpBuffer = (LPSTR)FUN_662ef590(piVar1,0x100);
  GetFullPathNameA((LPCSTR)param_2,0xff,lpBuffer,lpFilePart);
  FUN_662ef610(piVar1,-1);
  puVar5 = (undefined4 *)piVar3[0x12];
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  piVar3[0xc] = 0;
  piVar3[0xd] = 0;
  piVar3[0xe] = 0;
  piVar3[0x17] = 0;
  piVar3[0x18] = 0;
  piVar3[0x19] = 0;
  piVar3[9] = 0;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_662f5c80(puVar5);
    operator_delete(puVar5);
    piVar3[0x12] = 0;
  }
  piVar1 = (int *)piVar3[0x10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar3[0x10] = 0;
  }
  piVar2 = (int *)piVar3[0xf];
  piVar1 = piVar3 + 0xf;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *piVar1 = 0;
  }
  piVar2 = (int *)piVar3[0x11];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar3[0x11] = 0;
  }
  param_1 = (int *)0x0;
  param_2 = (int *)RMACreateRMEdit(&param_1);
  if (-1 < (int)param_2) {
    param_2 = (int *)(**(code **)*param_1)(param_1,&DAT_663069a8,piVar1);
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    param_1 = (int *)0x0;
  }
  if (-1 < (int)param_2) {
    iVar4 = (**(code **)(*(int *)*piVar1 + 0x40))((int *)*piVar1,piVar3[6],1);
    if (-1 < iVar4) {
      iVar4 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_663069b8,piVar3 + 0x10)
      ;
    }
    param_2 = (int *)0x0;
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*(int *)piVar3[0x10] + 0x20))((int *)piVar3[0x10],&param_2);
      if (-1 < iVar4) {
        this = operator_new(8);
        if (this == (void *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_662f5c50(this,param_2);
        }
        piVar3[0x12] = (int)puVar5;
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 8))(param_2);
        }
        piVar3[9] = 1;
      }
    }
  }
  return 0;
}


