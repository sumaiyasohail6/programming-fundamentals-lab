using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Project.Customer
{
    internal class CustomerModel
    
        {
            private string name;
            private string phone;
        private string address;
            public CustomerModel()
            {
            }

            public CustomerModel(string name, string phone,string address)
            {
                this.name = name;
                this.phone = phone;
            this.address = address;
            }

            public void SetName(string name)
            {
                this.name = name;
            }

            public string GetName()
            {
                return this.name;
            }

            public void SetPhone(string phone)
            {
                this.phone = phone;
            }

            public string GetPhone()
            {
                return this.phone;
            }
        public void SetAddress(string address)
        {
            this.address = address;
        }
        public string GetAddress()
        {
            return this.address;
        }

            public override string ToString()
            {
                return $"{name},{phone},{address}";
            }
        }
    }

