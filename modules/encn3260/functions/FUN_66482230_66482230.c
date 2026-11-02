/* Module: encn3260.dll
   Function: FUN_66482230
   Address: 66482230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66482230(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_3;
  piVar1 = param_1;
  if (param_2 != 0) {
    FUN_66483190(param_1,param_2,s_Unable_to_process_stream_header_664e2150);
    return 0;
  }
  FUN_664baab0((void *)param_1[0xe],param_3);
  (**(code **)(*piVar2 + 4))(piVar2);
  param_1 = (int *)0x0;
  iVar3 = (**(code **)(*piVar2 + 0x10))(piVar2,s_StreamNumber_664e2140,&param_1);
  if (iVar3 != 0) {
    return -0x7fffbffb;
  }
  *(short *)((int)piVar1 + 0x4a) = *(short *)((int)piVar1 + 0x4a) + 1;
  if (*(ushort *)(piVar1 + 0x12) <= *(ushort *)((int)piVar1 + 0x4a)) {
    iVar3 = FUN_664831e0(piVar1);
    return iVar3;
  }
  return 0;
}


