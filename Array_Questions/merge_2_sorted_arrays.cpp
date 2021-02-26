// #include <iostream>
//
// using namespace std;
//
// //////////////////
// int main()
// {
// int size1{},size2{};
// cin>>size1;
// int arr1[size1];
// for(int i=0;i<size1;i++)
// {
//   cin>>arr1[i];
// }
// cin>>size2;
// int arr2[size2];
// for(int i=0;i<size2;i++)
// {
//   cin>>arr2[i];
// }
// ///////////////
// int ans[size1+size2];
// int j{},k{},i{};
// while(j!=size1 || k!=size2)
// {
//     if(arr1[j]<arr2[k])
//     {
//         ans[i]=arr1[j];
//         j++;
//     }
//     else
//     {
//         ans[i]=arr2[k];
//         k++;
//     }
//     i++;
// }
// if(j==size1)
// {
//         for(i;i<(size1+size2);i++)
//         ans[i]=arr2[k];
// }
// else
// {
//         for(i;i<(size1+size2);i++)
//         ans[i]=arr1[j];
// }
//
// ///////////////
// for(int i=0;i<(size1+size2);i++)
// {
//   cout<<ans[i];
// }
//    return 0;
// }
// void compare(int *arr1, int &i, int *arr2, int &j, int *ans, int &k){
//     if(arr1[i] < arr2[j]){
//         ans[k] = arr1[i];
//         i++;
//         k++;
//     }
//     else{
//         ans[k] = arr2[j];
//         j++;
//         k++;
//     }
// }
// void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
//
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Save the merged array in ans[] array passed as argument.
//      * Don't return or print anything.
//      * Taking input and printing output is handled automatically.
//      */
//     // int j{},k{},i{};
//     // while(j!=size1 || k!=size2)
//     // {
//     //     if(arr1[j]<arr2[k])
//     //     {
//     //         ans[i]=arr1[j];
//     //         j++;
//     //     }
//     //     else
//     //     {
//     //         ans[i]=arr2[k];
//     //         k++;
//     //     }
//     //     i++;
//     // }
//     // if(j==size1)
//     // {
//     //         for(i;i<(size1+size2);i++)
//     //             ans[i]=arr2[k];
//     // }
//     // else
//     // {
//     //         for(i;i<(size1+size2);i++)
//     //             ans[i]=arr1[j];
//     // }
//     int i{0}, j{0}, k{0};
//     while((i < size1) || (j < size2)){
//         if(i < size1){
//             if(j < size2){
//                 compare(arr1, i, arr2, j, ans, k);
//             }
//             else{
//                 ans[k] = arr1[i];
//                 i++;
//                 k++;
//             }
//         }
//         else{
//             ans[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }
//
// }
