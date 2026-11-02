/* Module: vegas30k.dll
   Function: FUN_011887c0
   Address: 011887c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011887c0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  piVar2 = param_1;
  uVar5 = 0;
  uVar6 = 1;
  if (*(short *)((int)param_1 + 0x4fa) != 0) {
    piVar4 = param_1 + 0x24;
    piVar3 = param_2;
    do {
      uVar5 = uVar5 + 1;
      *piVar4 = *piVar3;
      piVar4[1] = piVar3[1];
      piVar3 = piVar3 + 2;
      piVar4 = piVar4 + 2;
    } while (uVar5 < *(ushort *)((int)param_1 + 0x4fa));
  }
  puVar1 = (undefined4 *)param_1[0x18e];
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_01188847:
      if ((*(byte *)(piVar2 + 8) & 1) != 0) {
        piVar4 = (int *)piVar2[0xb];
        if ((piVar4[0x180] != 2) && (piVar4[0x180] != 3)) {
          (**(code **)(*piVar2 + 0xd0))(piVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
          return uVar6;
        }
        (**(code **)(*piVar4 + 0xd8))(piVar4,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      }
      return uVar6;
    }
    param_1 = (int *)0x0;
    (**(code **)(*(int *)*puVar1 + 0x8c))((int *)*puVar1,0x32,&param_1);
    if (puVar1[9] != 0) {
      (**(code **)(*(int *)*puVar1 + 0x198))(piVar2,piVar2 + 0x24);
      uVar6 = 0;
      goto LAB_01188847;
    }
    puVar1 = (undefined4 *)puVar1[0x19];
  } while( true );
}


