/* Module: rmto3260.dll
   Function: FUN_662d3910
   Address: 662d3910
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d3910(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int *local_8;
  
  FUN_662e2a70(local_1c);
  piVar3 = param_1;
  *(undefined2 *)(param_1 + 0x12) = 0;
  iVar4 = (**(code **)(*(int *)param_1[0xe] + 0x30))((int *)param_1[0xe],&local_10);
  if (-1 < iVar4) {
    local_c = 0;
    if ((ushort)local_10 != 0) {
      do {
        if (iVar4 < 0) {
          return iVar4;
        }
        uVar5 = (uint)((ulonglong)((local_c & 0xffff) * 0x32) /
                      (ulonglong)(longlong)(int)(local_10 & 0xffff));
        if (0x32 < uVar5) {
          uVar5 = 0x32;
        }
        iVar6 = 0;
        if (0 < *(int *)((int)piVar3 + 0x6a)) {
          do {
            if (iVar4 < 0) break;
            piVar1 = *(int **)(*(int *)((int)piVar3 + 0x66) + iVar6 * 4);
            iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,uVar5);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)((int)piVar3 + 0x6a));
        }
        local_8 = (int *)0x0;
        if (-1 < iVar4) {
          iVar4 = (**(code **)(*(int *)piVar3[0xe] + 0x38))((int *)piVar3[0xe],local_c,&local_8);
        }
        bVar2 = true;
        if (-1 < iVar4) {
          if (*(void **)((int)local_8 + 0x16) == (void *)0x0) {
            iVar4 = FUN_662d0dc0(&param_1,*local_8,(char *)&param_1,
                                 s_application_x_pn_multirate_reale_6630a094);
            if (param_1 == (int *)0x0) {
              iVar4 = FUN_662d0dc0(local_8,*local_8,(char *)&param_1,
                                   s_application_x_pn_multirate_image_6630a0d8);
              piVar1 = param_1;
              goto joined_r0x662d3a5f;
            }
LAB_662d3a61:
            bVar2 = false;
          }
          else {
            iVar4 = FUN_662d0dc0(*(void **)((int)local_8 + 0x16),*local_8,(char *)&param_1,
                                 s_application_x_pn_realevent_6630a0bc);
            if (param_1 == (int *)0x0) {
              iVar4 = FUN_662d0dc0(&param_1,*local_8,(char *)&param_1,
                                   s_application_x_pn_imagemap_6630a0fc);
              if (param_1 != (int *)0x0) {
                piVar1 = (int *)piVar3[8];
                goto joined_r0x662d3a5f;
              }
            }
            else {
              piVar1 = (int *)piVar3[7];
joined_r0x662d3a5f:
              if (piVar1 != (int *)0x0) goto LAB_662d3a61;
            }
          }
          if ((*(int *)((int)local_8 + 0x1a) != 0) && (*(int *)((int)local_8 + 0x1e) == 0)) {
            bVar2 = false;
          }
          if (((-1 < iVar4) && (bVar2)) &&
             ((*(int *)((int)local_8 + 0x16) != 0 || (*(int *)((int)local_8 + 0x22) != 0)))) {
            iVar4 = (**(code **)(*piVar3 + 0x4c))(piVar3,local_8);
          }
        }
        local_c = local_c + 1;
      } while ((ushort)local_c < (ushort)local_10);
    }
  }
  if (-1 < iVar4) {
    iVar4 = (**(code **)(*piVar3 + 0x68))(piVar3);
  }
  return iVar4;
}


