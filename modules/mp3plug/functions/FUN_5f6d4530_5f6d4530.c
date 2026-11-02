/* Module: mp3plug.dll
   Function: FUN_5f6d4530
   Address: 5f6d4530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6d4530(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined4 *in_stack_00001050;
  int in_stack_00001054;
  int in_stack_00001058;
  uint in_stack_0000105c;
  int in_stack_00001060;
  int in_stack_00001064;
  
  FUN_5f72a200();
  pvVar2 = calloc(4,in_stack_00001054 * in_stack_00001058);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  dVar8 = (double)in_stack_00001054;
  if (in_stack_0000105c != 0) {
    dVar8 = dVar8 / (double)(int)in_stack_0000105c;
  }
  iVar7 = 0;
  if (0 < in_stack_00001058) {
    do {
      if (0 < in_stack_00001054) {
        iVar6 = 0;
        iVar5 = 0;
        do {
          uVar4 = 0;
          iVar3 = iVar7 + iVar5;
          do {
            iVar1 = iVar3 * 8;
            iVar3 = iVar3 + in_stack_00001054 * in_stack_00001058;
            *(float *)(&stack0x00000000 + uVar4 * 4) =
                 (float)((float10)*(double *)(in_stack_00001064 + iVar1) * (float10)dVar8);
            uVar4 = uVar4 + 1;
          } while (iVar3 < in_stack_00001060);
          iVar3 = iVar7;
          if ((in_stack_00001054 <= in_stack_00001058) && (in_stack_00001054 != 1)) {
            iVar3 = (in_stack_00001058 + -1) - iVar7;
          }
          iVar3 = FUN_5f6d3b30((int *)((int)pvVar2 + iVar6 + iVar3 * in_stack_00001054 * 4),
                               in_stack_0000105c,uVar4,(int)&stack0x00000000);
          if (iVar3 == 0) {
            return 0;
          }
          iVar5 = iVar5 + in_stack_00001058;
          iVar6 = iVar6 + 4;
        } while (iVar6 < in_stack_00001054 << 2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < in_stack_00001058);
  }
  *in_stack_00001050 = pvVar2;
  return 1;
}


