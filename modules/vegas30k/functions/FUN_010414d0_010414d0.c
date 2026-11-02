/* Module: vegas30k.dll
   Function: FUN_010414d0
   Address: 010414d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_010414d0(int *param_1,int *param_2,undefined4 *param_3,int param_4,int param_5,int *param_6,
            int param_7)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x11] != 0) {
    (**(code **)(*param_1 + 0x1c))(param_1);
  }
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  *(short *)(param_1 + 6) = (short)param_2[4];
  *(int *)((int)param_1 + 0x1a) = *param_2;
  *(int *)((int)param_1 + 0x1e) = param_2[1];
  *(int *)((int)param_1 + 0x22) = param_2[2];
  *(int *)((int)param_1 + 0x26) = param_2[3];
  iVar2 = param_2[4];
  param_1[0x12] = 0;
  *(short *)((int)param_1 + 0x2a) = (short)iVar2;
  param_1[0xc] = param_4;
  param_1[0x13] = (uint)(param_3 != (undefined4 *)0x0);
  piVar1 = (int *)param_1[0xe];
  param_1[0xd] = param_5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0xe] = (int)param_6;
  if (param_6 != (int *)0x0) {
    (**(code **)(*param_6 + 4))(param_6);
  }
  piVar1 = (int *)param_1[0x1a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))(piVar1,0,param_1 + 0xc);
    (**(code **)(*(int *)param_1[0x1a] + 0x44))((int *)param_1[0x1a],param_1[0xe]);
    (**(code **)(*(int *)param_1[0x1a] + 0x60))((int *)param_1[0x1a],param_1 + 2,param_1[0x13]);
    if (param_3 == (undefined4 *)0x0) goto LAB_010415d2;
    (**(code **)(*(int *)param_1[0x1a] + 0x68))((int *)param_1[0x1a],(int)param_1 + 0x1a);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)((int)param_1 + 0x1a);
    param_3[1] = *(undefined4 *)((int)param_1 + 0x1e);
    param_3[2] = *(undefined4 *)((int)param_1 + 0x22);
    param_3[3] = *(undefined4 *)((int)param_1 + 0x26);
    *(undefined2 *)(param_3 + 4) = *(undefined2 *)((int)param_1 + 0x2a);
  }
LAB_010415d2:
  param_1[0xf] = param_7;
  param_1[0x10] = 0;
  FUN_01040d80();
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  param_1[0x11] = 1;
  return 0;
}


