/* Module: encn3260.dll
   Function: FUN_66482030
   Address: 66482030
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_66482030(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  FUN_66483140(param_1);
  puVar1 = operator_new(0x1b2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66483b90(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = puVar1 + 0xc;
  }
  param_1[9] = (int)piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  if (*(int *)((int)param_1 + 0x9a) != -1) {
    (**(code **)(param_1[4] + 0xc))(param_1 + 4,*(int *)((int)param_1 + 0x9a));
  }
  iVar2 = (*(code *)**(undefined4 **)param_1[0xb])
                    ((undefined4 *)param_1[0xb],&DAT_664dccb0,(undefined4 *)((int)param_1 + 0x5e));
  if (iVar2 != 0) {
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  iVar2 = (*(code *)**(undefined4 **)param_1[8])
                    ((undefined4 *)param_1[8],&DAT_664dc5f0,param_1 + 0xf);
  if (iVar2 != 0) {
    return 0x80004005;
  }
  if (param_1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = param_1 + 5;
  }
  iVar2 = (**(code **)(*(int *)param_1[9] + 0xc))
                    ((int *)param_1[9],param_1[8],param_1[0x14],
                     CONCAT22((short)((uint)piVar3 >> 0x10),(short)param_1[0x16]),piVar3,2,
                     param_1[0x10],*(undefined4 *)((int)param_1 + 0x62),0,0,1);
  return -(uint)(iVar2 != 0) & 0x80004005;
}


